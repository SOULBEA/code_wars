#include<iostream>
using namespace std;

int smallest_num(int n, int arr[]){
  int smallest = arr[0];
  for(int i = 1; i<n; i++){
    if(arr[i]<smallest){
      smallest = arr[i];
    }
  }
  cout<<smallest;
  return smallest;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  smallest_num(n, arr);
  return 0;
}
