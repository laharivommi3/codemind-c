#include <iostream>
using namespace std;
int main()
{
    int n,count=0,i,m=0;
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
       if(n%i==0)
       {
           count++;
       }
    }
    if(count==0)
    cout<<"prime";
    else
    cout<<"not a prime";
}