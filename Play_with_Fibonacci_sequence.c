#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=1,sum=0;
    cin>>n;
    cout<<x<<" "<<y<<" ";
    for(int i=2;i<n;i++)
    {
        sum=x+y;
        x=y;
        y=sum;
        cout<<sum<<" ";
    }
}