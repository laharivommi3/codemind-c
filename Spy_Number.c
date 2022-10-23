#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,pro=1,sum=0;
    cin>>n;
    while(n>0)
    {
      r=n%10;
      sum=sum+r;
      pro=pro*r;
      n=n/10;
    }
    if(sum==pro)
    cout<<"Spy Number";
    else
    cout<<"Not Spy Number";
    
}