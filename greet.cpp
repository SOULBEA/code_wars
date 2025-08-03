#include<iostream>
#include<string>
using namespace std;

string greet(string name, string owner){
  if(name == owner){
    return "hello boss";
  }
  else{
    return "hello guest";
  }
}

int main(){
  string name;
  cout<<"enter your name: ";
  cin>>name;
  string owner;
  cout<<"enter owner name: ";
  cin>>owner;
  cout<<greet(name, owner)<<endl;
  return 0;
}
