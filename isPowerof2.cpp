/* Author: Ajeet Kumar Jaiswal*/
#include <bits/stdc++.h>
using namespace std;
bool isPowerof2(int n){
  // Base condition
  if(n==1){
    return true;
  }
  else if(n%2){
    return false;
  }
  return isPowerof2(n/2);
}
  
int main(){
  int n;
  cin>>n;
  if(isPowerof2(n)){
    cout<<n<<" is a 2 to power some number";
  }
  else{
    cout<<n<< " is not a 2 to power some number";
  }
  return 0;
}
