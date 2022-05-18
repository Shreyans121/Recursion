#include<iostream>
using namespace std;

void helper(string str, string &ans, int i = 0) {
  if(i >= str.size()) {
    return;
  }

  if(str[i] == 'p' and str[i+1] == 'i') {
    ans += "3.14";
    i++;
  }
  else {
    ans += str[i];
  }

  helper(str, ans, i + 1);
  return;
}

int main(int argc, char const *argv[]) {
  string str, ans = "";
  cin>>str;

  helper(str, ans);
  cout<<ans;
  return 0;
}
