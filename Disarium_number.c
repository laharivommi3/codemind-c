#include <bits/stdc++.h>
using namespace std;
int noOfDigits(int num)
{
    int digits=0;
    int temp=num;
    while(temp)
    {
        temp=temp/10;
        digits++;
    }
    return digits;
}
bool isDisarium(int num)
{
    int digits=noOfDigits(num);
    int sum=0;
    int temp=num;
    while(temp)
    {
        int rightDigit=temp%10;
        sum=sum+pow(rightDigit,digits--);
        temp=temp/10;
    }
    return (sum==num);
}
int main()
{
    int num;
    cin>>num;
    if(isDisarium(num))
    cout<<"True";
    else
    cout<<"False";
}
