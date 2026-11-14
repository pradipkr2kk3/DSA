#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n)
{
    int count =0;
    int temp =n;
    int sum =0;
    while(temp>0)
    {
        count = count+1;
        temp = temp/10;
    }
    temp =n;

    while(temp>0)
    {
        int rem = temp%10;
        sum = sum+pow(rem,count);
        temp = temp/10;
    }
    if(sum==n)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    bool status = isArmstrong(n);
    cout<<boolalpha<<status;
    return 0;
}