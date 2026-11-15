#include<iostream>
#include<algorithm>
using namespace std;

int gcdTwo(int a, int b)
{
    int small = min(a,b);
    int large = max(a,b);
    int rem ;
    while(small!=0)
    {
        rem = large%small;
        large = small;
        small = rem;
    }
    return large;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int gcd = gcdTwo(a,b);
    cout<<gcd<<endl;
    return 0;
}