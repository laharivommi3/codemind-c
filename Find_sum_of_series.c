#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cin>>n;
    for(float i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    cout<<fixed<<setprecision(2)<<sum;
}
