#include<iostream>
#include<string>
using namespace std;

int countStr(string str)
{
    int count =0;
    for(int i =0;str[i]!='\0';i++)
    {
        count = count+1;
    }
    return count;
}
int main()
{
    int result;
    string str;
    cin>>str;
    result = countStr(str);
    cout<<result<<endl;
    return 0;
}
