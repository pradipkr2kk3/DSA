#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isstringDuplicate(vector<string> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			if(arr[i]==arr[j])
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{	
	int n;
	cin>>n;
	vector<string>arr(n);
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool output = isstringDuplicate(arr);
	cout<<boolalpha<<output;
	return 0;
}
