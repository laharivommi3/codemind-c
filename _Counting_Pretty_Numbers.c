#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i,r,count=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}