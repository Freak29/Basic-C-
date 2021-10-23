#include<bits/stdc++.h>
using namespace std;
int getNthPentagonalNumber(int n) {
   return (3 * n * n - n) / 2;
}
int main() {
   int n = 7;
   cout << getNthPentagonalNumber(n) << endl;
   return 0;
}