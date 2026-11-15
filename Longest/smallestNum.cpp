#include<iostream>
#include<vector>
using namespace std;

int smallestNum(vector<int>arr)
{
    int small = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
        }
    }
    return small;
}
int main()
{
    int n, result;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    result = smallestNum(arr);
    cout<<result<<endl;
    return 0;
}