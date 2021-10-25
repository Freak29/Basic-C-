#include <iostream>
#include <string.h>
using namespace std;
class book
{
	private :
		char author[100];
		char title[100];
		char publisher[100];
		int stock;
		float price;
	public :
	static int astock;
	void read();
	void print();
	void add();
	int search(char t[10]);
	int purchase(char t[10]);	
};
int book :: astock;
void book::read()
{
	cin>>title>>author>>publisher>>stock>>price;
	book:: astock=astock+stock;
}
void book :: print()
{
	cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<stock<<"\t"<<price<<endl;
}
void book :: add()
{
		cin>>title>>author>>publisher>>stock>>price;
		book :: astock++;
}
int book :: search(char t[10])
{
	int flag=1;
	flag=strcmp(author,t);
	if(flag==0)
	{
		cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<stock<<"\t"<<price<<endl;
		return flag;
	}
	flag =1;
	return flag;
}
int book :: purchase(char t[10])
{
	int st;
	int flag=1;
	flag=strcmp(author,t);
	if(flag==0)
	{
		cout<<"\n Enter no of copies to purchase";
		cin>>st;
		stock=stock+st;
		cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<stock<<"\t"<<price<<endl;
		return flag;
	}
	flag =1;
	return flag;
}
int main()
{
	int i,j,ch,n;
	book* b1 =new book[100];
	char x[40];
	cout<<"\nEnter the no of books in library";
	cin>>n;
	do
	{
		cout<<"\n1.Read \n2.Print \n3.Add \n4.Search \n5.Purchase \n6.Quit"<<endl;
		cout<<"\n Enter the choice";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter Title \t Author \t Publisher \t Stock \t Price"<<endl; 
			for(i=0;i<n;i++)
			{
				b1[i].read();
			}
			break;
			case 2 : cout<<"***************************Library**************************"<<endl;
			cout<<"Title \t Author \t Publisher \t Stock \t Price"<<endl;
			for(i=0;i<n;i++)
			{
				b1[i].print();
			}
			break;
			case 3: cout<<"Enter Title \t Author \t Publisher \t Stock \t Price"<<endl;
			b1[n].add();
			n++;
			break;
			case 4 : cout<<"Enter author name to search"<<endl;
			cin>>x;
			for(i=0;i<n;i++)
			{
				j=b1[i].search(x);
			
			}
				
				if(j==1)
				{
					cout<<"\nNot Found";
				}
				else
				cout<<"\n Found";
				break;
				case 5: cout<<"Enter author name to search"<<endl;
			cin>>x;
			for(i=0;i<n;i++)
			{
				j=b1[i].purchase(x);
			
			}
				
				if(j==1)
				{
					cout<<"Enetr title author publisher etc";
					b1[n].add();
					n++;
				}
		}
			
			
				
		}while(ch!=6);
		return 0;
	}
