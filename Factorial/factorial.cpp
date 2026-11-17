#include<iostream>
using namespace std;

int Factorial(int n)
{int fact =1;
    while(n>0)
    {
            fact= fact*n;
            n--;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    int result = Factorial(n);
    cout<<result<<endl;
    return 0;
}