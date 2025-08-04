#include<iostream>
#include<string>
using namespace std;

string no_space(const string& ent){
  string result;
  for(char c : ent){
    if(c != ' '){
      result = result+c;
    }
  }
  return result;
}

int main(){
  string ent;
  cout<<"enter a string: ";
  cin>>ent;
  cout<<no_space(ent)<<endl;
  return 0;
}
