#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;  
    }
    return fact;
}
bool isStrong(int n)
{
    int r,sum=0,temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+fact(r);
        temp=temp/10;
    }
    if(sum==n)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(isStrong(n))
    cout<<"The number"<<" "<<n<<" "<<"is a strong number";
    else
    cout<<"The number"<<" "<<n<<" "<<"is not a strong number";
}