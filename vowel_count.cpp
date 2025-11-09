#include<iostream>
#include<string>
using namespace std;

int num_vowel(string n){
  int num = 0;
  for(char c : n){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
      num++;
    }
  }
  return num;
}

int main(){
  string n;
  cout<<"enter a random lowercase string: ";
  cin>>n;
  num_vowel(n);
  cout<<num_vowel;
  return 0;
}
