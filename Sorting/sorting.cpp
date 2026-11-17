#include<iostream>
#include<vector>
using namespace std;

vector<int> Sorting(vector<int> arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
       for(int j=0;j<arr.size()-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //swap(arr[j],arr[j+1]);
            }
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
    arr = Sorting(arr);
    cout<<"Sorted Array :- "<<endl;
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}