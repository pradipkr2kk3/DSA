#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNum(vector<int>&arr)
{
    int i=0;
    sort(arr.begin(),arr.end());
    for(i;i<arr.size();i++)
    {
        if(i!=arr[i])
        {
            return i;
        }
    }
    return i;
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
    int result = missingNum(arr);
    cout<<result;
    return 0;
}