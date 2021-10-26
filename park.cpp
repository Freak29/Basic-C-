#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Parking_lot
{
  public:int age;
          int slot;
          string registration_number;
  
};


int main() {
   string line;
   Parking_lot park[1000];
  ifstream myfile ("input.txt");
  vector<string>commands;
  if (myfile.is_open())
  {  int x = 0;
    while ( getline (myfile,line) )
    {
     
     
    istringstream iss(line);
    for(string s;iss>>s;)
      { 
         commands.push_back(s);
      }
      
    if(commands[0]=="Create_parking_lot")
    {
      stringstream geek(commands[1]);
      
      geek >> x;
      
      cout<<"Created parking of "<<x<<" slots";
      commands.clear();
      
    

    }
    
    else{
      for(int i=1;i<=x;i++){
      if(commands[0]=="Park"){
        string reg_no=commands[1];
        string age=commands[3];
        stringstream geek(age);
        int y;
        geek >> y;
        int Final_age=y;
        park[i].slot=i;
        park[i].age=Final_age;
        park[i].registration_number=reg_no;
        int n=commands.size();
        // for(int i=0;i<n;i++){
        //   cout<<commands[i]<<" \n";
        // }
        // cout<<"Car with vehicle registration number "<<park[i].registration_number<<"has been parked at slot number "<<i;
        break;
      }
      
    }
    }
    
    
    
   
    }
    myfile.close();
  }
   

  return 0;
}
