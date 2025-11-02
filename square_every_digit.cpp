#include<iostream>
#include<string>

int square_digits(int num){
  string result = "";
  string s = to_string(num);
  for(char c : s){
    int d = c - '0';
    result += to_string(d*d);
  }
  return stoi(result);
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int square_digits(n);
  return 0;
}
