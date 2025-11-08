#include<iostream>
#include<string>

using namespace std;

void friend_or_foe(int n, string arr[]){
  for(int i = 0; i<n; i++){
    if(arr[i].length() == 4){
      cout<<arr[i]<<" ";
    }
  }
  cout<<endl;
}

int main(){
  int n;
  cout<<"enter number of names you are going to input";
  cin>>n;
  string arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  friend_or_foe(n, arr);
  for(int j = 0; j<n; j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}
