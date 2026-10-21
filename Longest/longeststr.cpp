#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestStr(vector<string> str)
{
    string temp = "";
    for(int i=0;i<str.size();i++)
    {
        if(str[i].size()>temp.size())
        {
            temp = str[i];
        }
    }
    return temp;
}
int main()
{
    int n;
    string result;
    cin>>n;
    vector<string> str(n);
    for(int i =0; i<str.size();i++)
    {
        cin>>str[i];
    }
    result = longestStr(str);
    cout<<result<<endl;
    return 0;
}