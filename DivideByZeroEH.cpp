#include<iostream>
using namespace std;

class number
{

double x,y;

public:
void accept()
{
cout<<"\nenter the 1st numbers : ";
cin>>x;
cout<<"\nenter the 2nd numbers : ";
cin>>y;

}

double divide()
{
try
{
if(y==0)
throw(y);
cout<<"\ndivision is : "<<x/y;
}

catch(double p)
{
cout<<"\nNumber cannot be divided by zero";
}
}
};

int main()
{
number n;
n.accept();
n.divide();
cout<<"\n";
return 0;
}
