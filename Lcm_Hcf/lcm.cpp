// Find LCM of two Numbers.
#include<iostream>
#include<algorithm>
using namespace std;

long long lcmTwo(int a, int b)
{
    int small = min(a,b);
    int large = max(a,b);
    long long lcm;
    for(int i=1;i<=small;i++)
    {
        lcm= i*large;
        if(lcm%small==0)
        {
            return lcm;
        }
    }
    return lcm;
}
int main()
{
    int a,b;
    cin>>a;cin>>b;
    long long lcm = lcmTwo(a,b);
    cout<<lcm<<endl;
    return 0;
}