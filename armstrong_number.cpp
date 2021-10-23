#include<iostream>
#include<cmath>
using namespace std;
int count_digits(int n){
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int tmp=n,c=count_digits(n),sum=0;
    while(n>0){
    sum+=pow(n%10,c);
    n/=10;
    }
    if(sum==tmp)
    cout<<"Armstrong Number";
    else
    cout<<"Not an Armstrong Number";
    return 0;
}