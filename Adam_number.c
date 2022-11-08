#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int rev=0,r;
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
    int n,sq1,sq2,res1,res2;
    cin>>n; //12
    sq1=n*n; //144
    res1=reverse(n);//21
    sq2=res1*res1; //441
    res2=reverse(sq2);
    if(sq1==res2)
    cout<<"True";
    else
    cout<<"False";
}