#include<iostream>
#include<math.h>
using namespace std;

class shape
{
protected:
double length;
double width;
double area;
public:
void read()
{
cin>>length>>width;
}

virtual void compute_area()
{
;
}
};


class rectangle:public shape
{
public:
void compute_area()
{
area=length*width;
cout<<"Rectangle area is:"<<area<<endl;
}

};


class triangle:public shape
{
protected:
double height;
double peri;
public:
void compute_area()
{
cout<<"enter the value of length height and width:";
cin>>length>>height>>width;
peri=(length+width+height)/2;
area=(peri)*(peri-length)*(peri-width)*(peri-height);
area=sqrt(area);
cout<<"Triangle area is:"<<area<<endl;
}
};


int main()
{
rectangle r;
triangle t;
shape *s[2];
s[0]=&r;
s[1]=&t;
int ch;
do
{
cout<<"\n1)read"<<endl<<"2)area of rectangle."<<endl<<"3)area of triangle"<<endl<<"4)quit"<<endl;
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1: cout<<"enter the value of length and width:";
	s[0]->read();
	break;
case 2: s[0]->compute_area();
	break;
case 3:	s[1]->compute_area();
	break;
case 4: 
	break;
}
}while(ch!=4);
return 0;
}

