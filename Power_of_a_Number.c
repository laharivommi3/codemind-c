#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,power,mod;
    cin>>x>>y>>z;
    power=pow(x,y);
    mod=power%z;
    cout<<mod;
}