#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,gcd,max=0;
    cin>>a>>b;
    if(a>b)
    max=a;
    else
    max=b;
    for(i=1;i<=max;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
}