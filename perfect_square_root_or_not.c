#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double d=sqrt(n);
    if(d-(int)d>0)
    cout<<"False";
    else
    cout<<"True";
}