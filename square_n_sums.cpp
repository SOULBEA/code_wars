#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int arr[3] = {1,2,2};
  int sum = 0;
  for(int i = 0; i<=2; i++){
    sum += arr[i]*arr[i];
  }
  cout<<sum<<endl;
  return 0;
}
