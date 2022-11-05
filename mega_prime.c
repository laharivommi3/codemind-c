#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    if(n==1)
    return false;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    return true;
    else
    return false;
}
int main()
{
    int n,d,r;
    cin>>n;
    d=(int)log10(n)+1;
    int c=0;
    if(isPrime(n))
    {
    while(n>0)
    {
       r=n%10;
       n=n/10;
       if(isPrime(r))
       c++;
    }
    }
    if(c==d)
    cout<<"Mega Prime";
    else
    cout<<"Not Mega Prime";
}