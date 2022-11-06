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
        c++;
    }
    if(c==0)
    return true;
    else
    return false;
}
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(isPrime(i))
        {
        cout<<i<<endl;
        }
    }
}
