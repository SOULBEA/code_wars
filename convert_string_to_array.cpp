#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> string_to_array(const string& s){
  vector<string> result;
  string temp = "";
  for(auto ch : s){
    if(ch != ' '){
      temp += ch;
    }
    else{
      result.push_back(temp);
      temp = "";
    }
  }
  result.push_back(temp);
  return result;
}
