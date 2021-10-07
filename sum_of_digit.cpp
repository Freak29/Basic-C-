#include <bits/stdc++.h>
using namespace std;
 
int countDigit(long long n) {
  return floor(log10(n) + 1);
}
 
int main(void)
{
    long long n;
    cout << "Enter number : ";
    cin>>n;
    cout << "Number of digits : "
         << countDigit(n);
    return 0;
}
