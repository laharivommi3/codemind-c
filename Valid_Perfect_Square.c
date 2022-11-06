#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sq;
        cin>>n;
        sq=(int)sqrt(n);
        if(sq*sq==n)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
}