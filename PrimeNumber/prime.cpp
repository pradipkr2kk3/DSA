#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Elements = ";
    cin>>n;
    
    if(n>1)
    {
        bool prime = true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                prime = false;
                break;
            }
        }
        if(prime == false)
        {
            cout<<"Not Prime"<<endl;
        }
        else
            cout<<"Prime"<<endl;
    }
    else
        cout<<"Not Prime"<<endl;
    return 0;
}
