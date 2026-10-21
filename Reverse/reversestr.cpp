#include<iostream>
#include<string>
using namespace std;

string reverseStr(string str)
{
    string rev = "";
    for(int i=str.size()-1;i>=0;i--)
    {
        rev = rev+str[i];
    }
    return rev;
}
int main()
{
    string str, reverse = "";
    cin>>str;
    reverse = reverseStr(str);
    cout<<reverse<<endl;
    return 0;
}
