#include<iostream>
#include<string.h>
using namespace std;

class book
{
private:
char title[100];
char author[100];
char publisher[100];
float price;
int stock;


public:
static int avai_stock;
void read();
void print();
void add();
int search(char t[10]);
int purchase(char t[10]);
//static void sucessful();
};


int book::avai_stock;


void  book::read()
{
cin>>title>>author>>publisher>>price>>stock;
book::avai_stock=avai_stock+stock;

}


void book::print()
{
cout<<title<<"		"<<author<<"		"<<publisher<<"		"<<price<<"		"<<stock<<endl;
}


void book::add()
{

cin>>title>>author>>publisher>>price>>stock;
book::avai_stock++;

}


int book::search(char t[10])
{
int flag=1;
	flag=strcmp(author,t);
	
if(flag==0)
{
cout<<title<<"		"<<author<<"		"<<publisher<<"		"<<price<<"		"<<stock<<endl;
return flag;
}
flag=1;
return flag;	
}


int book::purchase(char t[10])
{
int st;

int flag=1;
	flag=strcmp(author,t);
	
if(flag==0)
{
cout<<"\n enter no. of copies to purchase:";
cin>>st;
stock=stock+st;
cout<<title<<"		"<<author<<"		"<<publisher<<"		"<<price<<"		"<<stock<<endl;
return flag;
}
flag=1;
return flag;

}



int main()
{
int i,n=0,ch,j=0;
char x[40];
book* b1= new book[100];
do
{
cout<<"1)read"<<endl<<"2)display"<<endl<<"3)add"<<endl<<"4)search"<<endl<<"5)purchase"<<endl;
cout<<"6)quit"<<endl;
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1: cout<<"enter the no. of books in library:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"enter the title,author,publisher price and stock:"<<endl;
	b1[i].read();
	
	}
	break;
case 2: cout<<"----------------------list of books in stall------------------------------------"<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"title is:   "<<"author is:   "<<"publisher is:        "<<"price is:        "<<"stock is:  "<<endl;
	for(i=0;i<n;i++)
	{
	b1[i].print();
	}
	break;

case 3: cout<<"enter the title,author,publisher and price & stock :"<<endl;
	b1[n].add();
	n++;
	break;
case 4: cout<<"enter the author name to search";
	cin>>x;
	for(i=0;i<n;i++)
	{
	j=b1[i].search(x);	
	}
	if(j==1)
	{
		cout<<"book nt found"<<endl;
	}
	else
	{
	cout<<"book found"<<endl;
	}
	break;
case 5:	cout<<"enter the author name to purchase:";
	cin>>x;
	for(i=0;i<n;i++)
	{
	j=b1[i].purchase(x);	
	}

	if(j==1)
	{
	cout<<"enter the title,author,publisher and price:"<<endl;
		b1[n].add();
		n++;
	}
	
	break;
case 6: break;
}
}while(ch!=6);
return 0;
}
