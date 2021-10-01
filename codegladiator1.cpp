#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  int n;
  cin>>n;
  vector<string> str2;
  for(int i =0; i<n; i++){
    string si;
    cin>>si;
    str2.push_back(si);
  }


  for(int j = 0; j < n; j++){
    string ans = "POSITIVE";
    string str4 = str;
    string str3 = str2[j];
    for(int k =0; k<str3.size(); k++){
      int s = 0;
      int idx = str4.find(str3[k]);
      if(idx < 0){
        ans = "NEGATIVE";
        break;
      }else{
        str4.erase(s, idx + 1);
        s = idx + 1;
      }
    }
    cout<<ans<<"\n";
  }

  return 0;
}
