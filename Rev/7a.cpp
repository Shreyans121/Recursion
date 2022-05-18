#include<iostream>
using namespace std;

int helper(string str, int i) {
  if(i < 0) {
    return 0;
  }

  return helper(str, i - 1)*10 + (str[i] - '0');
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;

  cout<<helper(str, str.size() - 1) + 1;
  return 0;
}
