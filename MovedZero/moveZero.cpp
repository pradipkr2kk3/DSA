#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> missZero(vector<int>&arr)
{
    int j=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result = missZero(arr);
    for(int x : result)
    {
        cout<<x<<" ";
    }
    return 0;
}