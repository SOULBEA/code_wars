#include<iostream>
#include<string>
using namespace std;

string findNeedle(int n, string arr[]){
  for(int i = 0; i<n; i++){
    if(arr[i] == "needle"){
      return "found the needle at position" + to_string(i);
    }
  }
}

int main(){
  int n;
  cout<<"enter the size of haystack: ";
  cin>>n;
  string arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  findNeedle(n, arr);
  for(int j = 0; j<n; j++){
    cout<<arr[j]<<" ";
  }

  return 0;
}
