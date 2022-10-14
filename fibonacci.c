#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1,sum,i;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;i++)
    {
      sum=a+b;
      cout<<sum<<" ";
      a=b;
      b=sum;
    }
}