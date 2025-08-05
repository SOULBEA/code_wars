#include<iostream>
#include<string>
using namespace std;

string no_space(const string& x){
  string result;
  for(char c : ent){
    if(c != ' '){
      result = result+c;
    }
  }
  return result;
}

int main(){
  string x;
  cout<<"enter a string: ";
  cin>>x;
  cout<<no_space(x)<<endl;
  return 0;
}
