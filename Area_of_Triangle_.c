#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    float s=(float)(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(2)<<area;
}