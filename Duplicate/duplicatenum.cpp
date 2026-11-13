#include<iostream>
#include<vector>
using namespace std;
bool isDuplicate(vector<int> arr)
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
	vector<int> arr(n);
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool output = isDuplicate(arr);
	cout<<boolalpha<<output;
	return 0;
}

