#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int temp=n,r,rev=0;
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
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(isPalindrome(i))
        {
        cout<<i<<" ";
        }
    }
}
