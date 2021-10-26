#include<iostream>
#include<string.h>
using namespace std;


class base1
{
protected:
char name[30];
char dob[10];
char bloodgrp[3];
public:
char id[10];
};


class base2
{
protected:
float height;
float weight;
};


class base3
{
protected:
char policyno[30];
char contactaddr[50];
};


class derived:public base1,public base2,public base3
{
protected:
char phnno[20];
char licenceno[10];
public:
static int count;
void read();
void print();
void insert();
int search(char t[10]);
int delete_(char j[10]);
};

int derived::count;



void  derived::read()
{
cout<<"enter the id:"<<endl;
cin>>id;
cout<<"enter the name:"<<endl;
cin>>name;
cout<<"enter the dob:"<<endl;
cin>>dob;
cout<<"enter the bloodgrp:"<<endl;
cin>>bloodgrp;
cout<<"enter the height:"<<endl;
cin>>height;
cout<<"enter the weight:"<<endl;
cin>>weight;
cout<<"enter the policyno:"<<endl;
cin>>policyno;
cout<<"enter the contactaddr:"<<endl;
cin>>contactaddr;
cout<<"enter the phnno:"<<endl;
cin>>phnno;
cout<<"enter the licenceno:"<<endl;
cin>>licenceno;
}



void derived::print()
{
cout<<"id is:"<<id<<endl;
cout<<"name is:"<<name<<endl;
cout<<"date of birth is:"<<dob<<endl;
cout<<"blood group is:"<<bloodgrp<<endl;
cout<<"height is:"<<height<<endl;
cout<<"weight is:"<<weight<<endl;
cout<<"policy no. is:"<<policyno<<endl;
cout<<"contact address is:"<<contactaddr<<endl;
cout<<"concat no. is"<<phnno<<endl;
cout<<"licence no. is:"<<licenceno<<endl;
}



void derived::insert()
{
cout<<"enter the id:"<<endl;
cin>>id;
cout<<"enter the name:"<<endl;
cin>>name;
cout<<"enter the dob:"<<endl;
cin>>dob;
cout<<"enter the bloodgrp:"<<endl;
cin>>bloodgrp;
cout<<"enter the height:"<<endl;
cin>>height;
cout<<"enter the weight:"<<endl;
cin>>weight;
cout<<"enter the policyno:"<<endl;
cin>>policyno;
cout<<"enter the contactaddr:"<<endl;
cin>>contactaddr;
cout<<"enter the phnno:"<<endl;
cin>>phnno;
cout<<"enter the licenceno:"<<endl;
cin>>licenceno;
}



int derived::search(char t[10])
{

int flag=1;
	flag=strcmp(id,t);
	
if(flag==0)
{
cout<<"id is:"<<id<<endl;
cout<<"name is:"<<name<<endl;
cout<<"date of birth is:"<<dob<<endl;
cout<<"blood group is:"<<bloodgrp<<endl;
cout<<"height is:"<<height<<endl;
cout<<"weight is:"<<weight<<endl;
cout<<"policy no. is:"<<policyno<<endl;
cout<<"contact address is:"<<contactaddr<<endl;
cout<<"concat no. is"<<phnno<<endl;
cout<<"licence no. is:"<<licenceno<<endl;
return flag;
}
flag=1;
return flag;	
}



int derived::delete_(char j[10])
{
int flag=1;
	flag=strcmp(id,j);
	
if(flag==0)
{

//cout<<"---------------";
strcpy(name,"NULL");
strcpy(dob,"NULL");
strcpy(bloodgrp,"NULL");
strcpy(policyno,"NULL");
strcpy(contactaddr,"NULL");
strcpy(phnno,"NULL");
strcpy(contactaddr,"NULL");
height=weight=0;
cout<<"record deleted"<<endl;
return flag;
}
flag=1;
return flag;	
}


int main()
{
int i,n=0,ch,j=0;
char x[40],id[10];
derived d1[100];
do
{
cout<<"1)read"<<endl<<"2)display"<<endl<<"3)insert"<<endl<<"4)search"<<endl<<"5)delete"<<endl;
cout<<"6)quit"<<endl;
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1: cout<<"\nenter the no. of entries to be inserted:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"\n";
	d1[i].read();
	}
	break;
case 2: cout<<"\nlist of entries"<<endl;
	for(i=0;i<n;i++)
	{
	cout<<"\n";
	d1[i].print();
	}
	break;
case 3: d1[n].insert();
	n++;
	break;
case 4: cout<<"enter the id to search";
	cin>>x;
	for(i=0;i<n;i++)
	{
	j=d1[i].search(x);	
	}
	if(j==1)
	{
		cout<<"id nt found"<<endl;
	}
	else
	{
	cout<<"id found"<<endl;
	}
	break;
	
	break;
case 5: cout<<"enter the id to delete";
	cin>>id;
	for(i=0;i<n;i++)
	{
	j=d1[i].delete_(id);
	}
	break;
case 6: 
	break;
}
}while(ch!=6);
return 0;
}
