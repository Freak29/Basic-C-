#include <iostream>
#include <conio.h>
using namespace std;

float area(float r)
{
    return (3.14 * r * r);
}
float area(double b, float h)
{
    return (0.5 * b * h);
}
float area(float l, float b)
{
    return (l * b);
}
int main()
{

    cout << " area of circle =" << area(2.3) << endl;
    cout << "area of rectangle =" << area(2.4, 3.1) << endl;
    cout << "area of rectangle =" << area(4.2, 4.4) << endl;

    return 0;
}
