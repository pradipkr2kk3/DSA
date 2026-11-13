#include<iostream>
#include<vector>
using namespace std;

int uniqueNum(vector<int> arr)
{
	bool status = true;
	for(int i=0;i<arr.size();i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			if(arr[i] == arr[j])
			{

				break;
			}
		}


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
