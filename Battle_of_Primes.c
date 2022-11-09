#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
    return false;
    int count=0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
      if(n%i==0)
      count++;
    }
    if(count==0)
    return true;
    else
    return false;
    
}
int main()
{
     int n1,n2,sum;
     cin>>n1>>n2;
     sum=n1+n2;
     int c=0;
     for(int i=sum+1;;i++)
     {
        c++;
        if(isPrime(i))
        {
        break;
        }
     }
    cout<<c;
}