#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,w,c;
    cin>>l>>b>>w>>c;
    cout<<(((l+2*w)*(b+2*w)-l*b)*c);
}