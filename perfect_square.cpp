#include<iostream>
#include<math>
using namespace std;

bool is_square(int n){
  if(n<0){
    return false;
  }
  int root = sqrt(n);
  return root * root == n;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  is_square(n);
  return 0;
}
