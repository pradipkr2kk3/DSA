#include<iostream>
#include<vector>
using namespace std;
vector<int>reverseArray(vector<int>&arr)
{
    vector<int> result;
    for(int i=arr.size()-1;i>=0;i--)
    {
        result.push_back(arr[i]);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> output = reverseArray(arr);
    for(int x : output)
    {
        cout<<x<<" ";
    }
    return 0;
}