#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[1000];
	char largest[1000];
	int len=0;
	int largest_len=0;
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(a,1000);
		len=strlen(a);
		if(largest_len<len)
		{
			largest_len=len;
			strcpy(largest,a);
		}

	}

	cout<<"the largest string: "<<largest_len<<endl;
	cout<<largest;
}