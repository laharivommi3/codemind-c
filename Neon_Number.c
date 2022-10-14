#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq;
    cin>>n;
    sq=n*n;
    int sum=0,r;
    while(sq>0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    cout<<"Neon Number";
    else
    cout<<"Not Neon Number";
}