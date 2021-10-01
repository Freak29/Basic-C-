#include<iostream>
#include<cstring>
bool is_plaindrome(char a[])
{  int i=0;
	int j=strlen(a)-1;
		while(i<=j)
		{ 
			if(a[i]==a[j])
			{
				i++;
			    j--;
			}
			else
			{
				return false;
			}
		} return true;
	                           //kingofnoobs0
}

using namespace std;
int main()
{ 
   char a[100];
   cin.getline(a,100);
   cout<<is_plaindrome(a);
	return 0;
}