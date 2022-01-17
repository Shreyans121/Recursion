#include<iostream>
using namespace std;

void helper(string str, string &op, int i) {
  if(i == str.length()) {
    return;
  }
  op += str[i];
  while(str[i] != '\0' and op.back() == str[i]) {
    i++;
  }

  helper(str, op, i);
}

int main(int argc, char const *argv[]) {
  string str, op = "";
  cin>>str;

  helper(str, op, 0);
  cout<<op<<endl;
  return 0;
}
