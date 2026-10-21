#include<iostream>
#include<vector>
using namespace std;

int longestNum(vector<int> num)
{
    int temp = 0;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]>temp)
        {
            temp = num[i];
        }
    }
    return temp;
}
int main()
{
    int n, result;
    cin>>n;
    vector<int> num(n);
    for(int i =0; i<num.size(); i++)
    {
        cin>>num[i];
    }
    result = longestNum(num);
    cout<<result<<endl;
    return 0;
}