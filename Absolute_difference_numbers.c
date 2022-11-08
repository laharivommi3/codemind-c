#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,d1,d2,len;
    cin>>n>>d;
    len=(int)log10(n)+1;
    d2=n%(int)pow(10,d);
    d1=n/(int)pow(10,len-d);
    cout<<abs(d1-d2);
}