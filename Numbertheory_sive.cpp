#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
bool arr[999999999];
int main()
{
    long long int maxN=90000000;
    arr[0]=true;
    arr[1]=true;
    prime.push_back(2);
    for(int i=2; i*i<=maxN; i++)
    {
        if(arr[i]==false)
        {
            for(int j=i*i; j<=maxN; j=j+i)
            {
                arr[j]=true;
            }
        }
    }
    for(int i=2; i<=maxN; i++)
    {
        if(arr[i]==false)
        {
            prime.push_back(i);
        }
    }
}
