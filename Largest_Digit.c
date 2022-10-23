#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,sum=0,max=0;
    cin>>n;
    while(n>0)
    {
      r=n%10;
      if(max<r)
      max=r;
      n=n/10;
    }
    cout<<max;
}