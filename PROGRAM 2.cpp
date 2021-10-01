#include<iostream>
using namespace std;
class Student
{
    char name[50];
    int rn;
public:
Student()
    {
cout<< "enter name" <<endl;
gets(name);
cout<<"enter roll no"<<endl;
cin>>rn;
    }
    void display()
    {
cout<<"Name: "<<name<<endl;
cout<<"Roll no:" <<rn<<endl;
    }
};

class Exam: public Student
{
    int marks[6];
public:
Exam()
    {
        int i;
        for(i=0;i<6;i++)
        {
cout<<"enter mark: ";
cin>>marks[i];
        }
    }
    int add()
    {
        int i,sum=0;
        for(i=0;i<6;i++)
        {
            sum=sum+marks[i];
        }
        return sum;
    }
};

class Result:public Exam
{
    int total;
public:
Result()
    {
            total=add();
    }
    void display()
    {
Student::display();
cout<<"Total marks: "<<total<<endl;
    }
};

int main()
{
    Result obj;
obj.display();
}
