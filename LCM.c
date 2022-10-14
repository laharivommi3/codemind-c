#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,lcm,max=0;
    cin>>a>>b;
    if(a>b)
    max=a;
    else
    max=b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    cout<<lcm;
}