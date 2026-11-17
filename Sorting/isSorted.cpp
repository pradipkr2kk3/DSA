#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
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
    bool result = isSorted(arr);
    cout<<boolalpha<<result<<endl;
    return 0;
}