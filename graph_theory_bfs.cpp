#include<bits/stdc++.h>
using namespace std;
int visit[10000];
int distence[10000];
int main()
{
    int node,edge;
    cout<<"Enter total node and edge : ";
    cin>>node>>edge;
    vector<int>bfs[10000];
    for(int i=1; i<=edge; i++)
    {
        int a,b;
        cin>>a>>b;
        bfs[a].push_back(b);
        bfs[b].push_back(a);
    }
    queue<int>q;
    cout<<"Enter source node : ";
    int p;
    cin>>p;
    visit[p]=1;
    distence[p]=0;
    q.push(p);
    while(1)
    {
        if(q.empty())
        {
            break;
        }
        int n=0;
        n=q.front();
        q.pop();
        for(int i=0; i<bfs[n].size(); i++)
        {
            if(visit[bfs[n][i]]==0)
            {
                visit[bfs[n][i]]=1;
                distence[bfs[n][i]]=distence[n]+1;
                q.push(bfs[n][i]);
            }
        }
    }
    int w;
    cout<<"Enter the destinaion : ";
    cin>>w;
    cout<<distence[w];
}
