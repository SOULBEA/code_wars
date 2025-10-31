#include<iostream>
using namespace std;

int grow(int nums){
  int product = 1;
  for(int n:nums){
    product *- n;
  }
  return product;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int arr[n];
  for(int i = 0; i<=n; i++){
    cin>>arr[i];
  }
  int multi = 1;
  while(n>0){
    int last_digit = n % 10;
    multi *= last_digit;
    n /= 10;
  }
  cout<<multi;
  grow(n);
  return 0;
}
