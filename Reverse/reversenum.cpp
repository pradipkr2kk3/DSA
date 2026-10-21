#include<iostream>
using namespace std;

int reverseNum(int n)
{
    int reverse=0,remainder;
    while(n>0)
    {
        remainder = n%10;
        reverse = reverse*10+remainder;
        n=n/10;
    }
    return reverse;
}
int main()
{
    int n, reverse = 0;
    cin>>n;
    reverse = reverseNum(n);
    cout<<reverse<<endl;
    return 0;
}