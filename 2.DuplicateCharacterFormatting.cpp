// hello -> hel*lo

#include<iostream>
using namespace std;

void helper(string &str, string &op, int i) {
    op += str[i];
  if(i == str.length()-1) {
    return;
  }
  if(str[i] == str[i+1]) {
    op += '*';
  }
  helper(str, op, i+1);
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;

  string op = "";

  helper(str, op, 0);

  cout<<op<<endl;
  return 0;
}
