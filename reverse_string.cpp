#include<iostream>
#include<string>
using namespace std;

int main(){
  string result = str;
  int n = result.size();
  for(int i = 0; i<n/2; i++){
    swap(result[i], result[n-i-1]);
  }
  return 0;
}
