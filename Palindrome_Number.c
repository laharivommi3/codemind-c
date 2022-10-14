#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int temp=n,rev=0,r;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(temp==rev)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
}