#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a1("King");
    string a2("Martin");
    string a3("Luther");
    a1.append(a2);
    a1.append(a3);
    cout << a1 << endl;
    return 0;
}