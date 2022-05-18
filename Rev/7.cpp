#include<iostream>
using namespace std;

int helper(string str, int i, int ans) {
  if(i == str.size()) {
    return ans;
  }

  ans = ans * 10 + (int)(str[i] - '0');
  return helper(str, i+1, ans);
  // return;
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;
  int ans = 0;
  cout<<helper(str, 0, ans)+1<<endl;
  return 0;
}
