#include<iostream>
#include<fstream>
//#include<conio>
using namespace std;

int main()
{
int rno;
char name[20];
float marks;

cout<<"\nfile reading operation";

ofstream fout("student.txt");
cout<<"\nenter the roll no:";
cin>>rno;
fout<<rno;

cout<<"\nenter the name:";
cin>>name;
fout<<name;

cout<<"\n enter marks:";
cin>>marks;
fout<<marks;
fout.close();

ifstream fin("examplae.txt");
fin>>rno;
fin>>name;
cout<<"\nrollno:"<<rno;
cout<<"\n name:"<<name;
cout<<"\n marks:"<<marks;

cout<<"\n";
return 0;
}
