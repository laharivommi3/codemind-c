#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,x;
    cin>>n>>s;
    for(i=1;i<=s;i++)
    {
        if(i%2!=0)
        {
           cout<<n<<" x "<<i<<" = "<<n*i<<endl; 
        }
    }
}