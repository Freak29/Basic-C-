#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class student
{
char name[20];
int rollno;
public:
student()
{
name[0]='\0';
rollno=-1;
}
void getdata();
void putdata();
int returnroll()
{
return rollno;
}
};

void student::getdata()
{
cout<<"\nenter the name : " ;
cin>>name;
cout<<"\nenter roll no : ";
cin>>rollno;
}

void student::putdata()
{
cout<<"\n name is : "<<name<<endl;
cout<<"\n roll no is : "<<rollno<<endl;
}

class seq_file
{
char file_name[15];
public:
seq_file();
seq_file(char f[]);
void create();
void display();
void add();
void remove(int);
void modify(int);
};

seq_file::seq_file()
{
ofstream file("student.txt");
strcpy(file_name,"student.txt");
cout<<"default constructor";
if(file)
{
cout<<"\n file opened  successfully";
file.close();
}
else
cout<<"\\n file creation error";
}

seq_file::seq_file(char f[15])
{
ofstream file;
strcpy(file_name,f);
if(file)
{
cout<<" file opened  successfully";
file.close();
}
else
cout<<" file creation error";
}

void seq_file::create()
{
ofstream file;
student s;
file.open(file_name);
s.getdata();
file.write(reinterpret_cast <char *> (&s),sizeof(s));
file.close();
}

void seq_file::display()
{
ifstream file;
student s;
file.open(file_name);
//cout<<"\n rollno \t student name";
file.read(reinterpret_cast <char *> (&s),sizeof(s));
while(!file.eof())
{
s.putdata();
file.read(reinterpret_cast <char *> (&s),sizeof(s));
}
file.close();
}

void seq_file::add()
{
ofstream file;
student s;
file.open(file_name,ios::app);
s.getdata();
file.write(reinterpret_cast <char *> (&s),sizeof(s));
file.close();
}

void seq_file::remove_re(int roll)
{
ifstream file;
ofstream temp;
student s;
int flag=0;
file.open(file_name);
temp.open("temp.txt");
while(getline(file,line))
{
	if(line != roll)
		temp << line<< endl;
}
cout<<"the record with the roll no "<< roll<<"is deleted"<<endl;
file.close();
temp.close();
remove(file_name);
rename("temp.txt","record.txt");
/*
file.read(reinterpret_cast <char *> (&s),sizeof(s));
while(!file.eof())
if(roll==s.returnroll())
{
s.putdata();
flag=1;
}
else
{
temp.write(reinterpret_cast <char *> (&s),sizeof(s));
file.read(reinterpret_cast <char *> (&s),sizeof(s));
}
if(flag==0)
cout<<"rollno"<<roll<<"does not exists";
file.close();
temp.close();
//remove(file_name);
rename("temp.txt",file_name);*/
}

void seq_file::modify(int roll)
{
ifstream file;
ofstream temp;
student s;
int flag=0;
file.open(file_name);
temp.open("temp.txt");
file.read(reinterpret_cast <char *> (&s),sizeof(s));
while(!file.eof())
{
if(roll==s.returnroll())
{
s.putdata();
cout<<"\n enter the data to be modify : ";
s.getdata();
flag=1;
}
temp.write(reinterpret_cast <char *> (&s),sizeof(s));
file.read(reinterpret_cast <char *> (&s),sizeof(s));
}
if(flag==0)
cout<<"rollno"<<roll<<"does not exists";
file.close();
temp.close();
//remove(file_name);
rename("temp.txt",file_name);
}

int main()
{

int choice;
char f[15];
int r;
cout<<"enter file name : ";
cin>>f;
seq_file sfile(f);
do
{
cout<<"\n 1) create \n 2) display \n 3) add a record \n 4) delete a record";
cout<<"\n 5) modify a record \n\n enter your choice:";
cin>>choice;
switch(choice)
{
case 1 :sfile.create();
	break;
case 2 :sfile.display();
	break;
case 3 :sfile.add();
	break;
case 4 :cout<<"\n enter the rollno of record to be deleted : ";
	cin>>r;
	sfile.remove_re(r);
	break;
case 5 :cout<<"\n enter the rollno of record to be modified : ";
	cin>>r;
	sfile.modify(r);
	break;
}
}while(choice<6);
cout<<"\n";

return 1;
}
