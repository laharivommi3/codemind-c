#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
   int rev=0,r;
   n=abs(n);
   while(n>0)
   {
       r=n%10;
       rev=rev*10+r;
       n=n/10;
   }
   return rev;
}
int main()
{
    int n;
    cin>>n;
    if(n<0)
    cout<<"-"<<reverse(n);
    else
    cout<<reverse(n);
}