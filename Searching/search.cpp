#include<iostream>
using namespace std;


bool Searching(int arr[], int n, int key)
{
    bool isSearch = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            isSearch = true;
            break;
        }
    }
    return isSearch;
}
int main()
{
    int n,key;
    bool result;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key = ";
    cin>>key;
    result = Searching(arr,n,key);
    if(result)
        cout<<" True " <<endl;
    else
        cout<<" False "<<endl;
    return 0;
}