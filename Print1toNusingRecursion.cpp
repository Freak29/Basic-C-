/* Author: Ajeet Kumar Jaiswal*/
#include <bits/stdc++.h>
using namespace std;

void print(int n){
  // Base condition
  if(n==1){
    cout<<1<<" ";
    return;
  }
  print(n-1);
  cout<<n<<" ";
  return ;
}
int main(){
  int n;
  cin>>n;
  print(n);
  return 0;
}
