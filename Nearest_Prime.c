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
    int t;
    cin>>t;
    while(t--)
    {
        int n,d1=0,d2=0;
        cin>>n;
        for(int i=n;;i++)
        {
            if(isPrime(i))
            {
                d1=i;
                break;
            }
        }
        for(int i=n;i>=2;i--)
        {
            if(isPrime(i))
            {
                d2=i;
                break;
            }
        }
        if(n-d2>d1-n)
        cout<<d1<<endl;
        else if(n-d2<d1-n)
        cout<<d2<<endl;
        else if(n-d2==d1-n)
        cout<<std::min(d1,d2)<<endl;
    }
}