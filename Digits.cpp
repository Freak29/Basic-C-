#include <bits/stdc++.h>
using namespace std;
 
int countDigit(long long n) {
  return floor(log10(n) + 1);
}
 
int main(void)
{
    long long n = 345289467;
    cout << "Number of digits : "
         << countDigit(n);
    return 0;
}
