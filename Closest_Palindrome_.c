#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int temp=n,rev=0,r;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    return true;
    else
    return false;
}
int main()
{
    int n,d1=0,d2=0;
    cin>>n;
    for(int i=n+1;;i++)
    {
        if(isPalindrome(i))
        {
            d1=i;
            break;
        }
    }
    for(int i=n-1;i>=1;i--)
    {
        if(isPalindrome(i))
        {
            d2=i;
            break;
        }
    }
    if(n-d2>d1-n)
    cout<<d1;
    else if(n-d2<d1-n)
    cout<<d2;
    else
    cout<<d2<<" "<<d1;
}