//Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

#include<iostream>
#include<iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}
	for(int i=0;i<n;i++)
	{
		int l=0;
		int r=n-1;
		while(l<r)
		{
			swap(a[i][l],a[i][r]);
			l++;
			r--;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
		    swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

