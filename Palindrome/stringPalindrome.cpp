#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s)
{
	int n = s.size()-1;
	bool status = true;
	for(int i =0;i<(n+1)/2;i++)
	{
		if(s[i] != s[n])
		{
			status = false;
			break;
		}
		n--;
	}
	if(status)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{

	string s;
    	cin>>s;
	bool output = isPalindrome(s);
	cout<<boolalpha<<output;

	return 0;
}
