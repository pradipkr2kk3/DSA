#include<iostream>
#include<vector>
#include<string>
using namespace std;

string seclongstr(vector<string> str)
{
    string longest = "";
    string seclong = "";

    if(str.size() == 1)
    {
        return seclong = str[0];
    }
    else
    {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i].size()>longest.size())
            {   
                seclong = longest;
                longest = str[i];
            }
            else if(str[i].size()>seclong.size() && longest.size()>str[i].size())
            {
                seclong = str[i];
            }
        }
        return seclong;
    }
}
int main()
{
    int n;
    string seclong;
    cin>>n;
    vector<string> str(n);
    for(int i =0; i<str.size();i++)
    {
        cin>>str[i];
    }
    seclong = seclongstr(str);
    cout<<seclong<<endl;
    return 0;
}