#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  //double a = 1.0;
  //double d = 3.0;
  //double x = (n/2) * (2 * a + (n-1) * d);
  //cout<<x<<endl;
  float sum = 0;
  char str[3];
  for(auto i = 0; i<n; i++) sum +=1./(3*i+1);
  ostringstream(str, "%.2f", sum);
  cout<<str<<endl;
  return 0;
}
