// Check Given Array is fiboancci series or not ?
#include<iostream>
using namespace std;

int main()
{
    int n; // 0 1 1 2 3 5 8 13 21 34...
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {   
        cin>> arr[i];
    }
    bool isfibo = (n>=3);
    
    for(int i=2;i<n;i++)
    {
        if(arr[i] != arr[i-1]+arr[i-2])
        {
            isfibo = false;
            break;
        }
    }
    if(isfibo)
        cout<<"Fibonacci Series"<<endl;
    else
        cout<<"Not Fibonacci Series"<<endl;
    return 0;
}