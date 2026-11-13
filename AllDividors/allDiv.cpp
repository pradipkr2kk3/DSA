#include<iostream>
#include<vector>
using namespace std;

vector<int>allDiv(int n)
{
    vector<int>result;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            result.push_back(i);
        }
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int> output;
    output = allDiv(n);
    for(int x : output)
    {
        cout<<x<<" ";
    }
    /*for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }*/
    return 0;
}