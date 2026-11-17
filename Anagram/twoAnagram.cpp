// it is case sensitive.
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t)
{
    if(s.size()==t.size())
    {
        bool status;
        for(int i=0;i<t.size();i++)
        {
            status = false;
            for(int j=0;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    t[j] = '*';
                    status = true;
                    break;
                }
            }
            if(status==false)
            {
                return false;
            }
        }
        return true;  
    }
    else
    {
        return false;
    }
}
int main()
{
    string s, t;
    cin>>s>>t;
    bool status = (isAnagram(s,t));
    cout<<boolalpha<<status<<endl;
    return 0;
}
