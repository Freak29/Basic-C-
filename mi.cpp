#include <iostream>
using namespace std;
class personaldata
{
	protected:
		char name[100];
		int id;
		char dob[100];
		public :
			void read()
			{
				cout<<"\n Enter name id and dob";
				cin>>name>>id>>dob;
			}
			void display()
			{
				cout<<"name is "<<name<<"id is "<<id<<"dob is "<<dob<<endl;
			}
};
class professionaldata
{
	protected : 
	     int sal;
	     char deg[100];
	     char dep[100];
	     public :
	     	void read1()
	     	{
	     		cout<<"\nEnter the sal deg and dep";
	     		cin>>sal>>deg>>dep;
			 }
			void display1()
			{
				cout<<"Sal is "<<sal<<"Deg is"<<deg<<"Dep is"<<dep<<endl;
			 } 
};
class acedamic : public personaldata, public professionaldata
{
	protected :
		char qua[100];
		double ssc;
		double hsc;
		public :
			void read2()
			{
				read1();
				cout<<"Enter qua hsc ssc"<<endl;
				cin>>qua>>ssc>>hsc;
			}
			void display2()
			{
				display();
				display1();
				cout<<"qua is "<<qua<<"ssc is"<<ssc<<"hsc is"<<hsc<<endl;
			}
};
int main()
{
	int i,n,ch;
	acedamic a1[100];
	do
	{
		cout<<"Enter the entries"<<endl;
		cin>>n;
		cout<<"\n1.Read \n2.Print";
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: for(i=0;i<n;i++)
			{
				a1[i].read();
				a1[i].read2();
				
			 } 
			 break;
			 case 2 :
			 	for(i=0;i<n;i++)
			 	{
			 		a1[i].display2();
			 		
				 }
				 break;
		}
	}while(ch!=3);
}

