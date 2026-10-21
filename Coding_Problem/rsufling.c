#include<stdio.h>

void permutation(int arr[], int n )
{
	 int count =0;
	 int j, temp;
	 count++;

	for(int i=0; i<n-1;i++)
	{
		j= ( count/factorial(n-i-1) )% (n-i);
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+j] = temp;
	}
	
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}

}

int factorial(int n)
{
	int a = 1;
	while(n>1)
	{
		a = a *n;
		n--;
	}
	
	return a;
}

int main()
{
	int arr[] = {1,2,3};
	int n=3;
	
	for( int i=0; i<10;i++)
	{
		permutation(arr,n);
	}
	return 0;
}

