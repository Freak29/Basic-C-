#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the 4 digit number";
    cin>>n;
    int ans=0;
    while(n){
        int r=n%10;
        ans=ans*10+r;
        n=n/10;
    }
    cout<<ans;
}
