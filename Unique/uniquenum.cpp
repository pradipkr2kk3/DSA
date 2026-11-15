#include<iostream>
#include<vector>
using namespace std;

int uniqueNum(vector<int> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		bool status = true;
		for(int j=0;j<arr.size();j++)
		{
			if(i!=j && arr[i] == arr[j])
			{
				status = false;
				break;
			}
		}
		if(status)
		{
			return arr[i];
		}
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int output = uniqueNum(arr);
	cout<<output<<endl;
	return 0;
}
