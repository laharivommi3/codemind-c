#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[n*4],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>x[i];
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    cout<<sum;
}