#include<iostream>
#include<string>
using namespace std;

string hoop_count(int n){
  if(n>=10){
    return "great, now move on to tricks";
  }
  else
    return "Keep at it dont lose hope";
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  hoop_count(int n);
  return 0;
}
