#include<iostream>
using namespace std;

void helper(string &str, string &ans, int i) {
  if(i == str.size()) {
    return;
  }

  if(str[i] == str[i-1]) {
    i++;
  }
  ans += str[i];
  helper(str, ans, i+1);

  return;
}

int main(int argc, char const *argv[]) {
  string str, ans = "";
  cin>>str;
  ans += str[0];

  helper(str, ans, 1);

  cout<<ans;

  return 0;
}
