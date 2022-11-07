#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0,d,r;
    cin>>n;
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        e++;
        else
        o++;
    }
    if(e>=1 && o>=1)
    cout<<"Mixed";
    else if(e==d)
    cout<<"Even";
    else
    cout<<"Odd";
}