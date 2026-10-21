#include<iostream>
using namespace std;

int main()
{

    int n,original, reverse=0, remainder; // 12321 
    cin>>n;
    original = n;

    while(n>0)
    {
        remainder = n%10;
        reverse = reverse*10+remainder;
        n= n/10;
    }
    if(original == reverse)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}