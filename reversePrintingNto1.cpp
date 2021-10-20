/* Ajay*/
#include <bits/stdc++.h>
using namespace std;

void reversePrintNto1(int n){
  // Base condition
  if(n==1){
      cout<<"1 ";
      return;
  }
  cout<<n<<" ";
  reversePrintNto1(n-1);
  return;
}
int main(){
  int n;
  cin>>n;
  reversePrintNto1(n);
  return 0;
}
