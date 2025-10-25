#include<iostream>
using namespace std;

int main(){
  unsigned long n;
  cout<<"enter a number: ";
  cin>>n;
  int count = 0;
  int i = 0;
  int arr[20];

  while(n>0){
    arr[count++] = n % 10;
    n = n/10;
  }

  cout<<count;
  for(int j = 0; j<count; j++){
    cout<<arr[j];
  }

  return 0;
}
