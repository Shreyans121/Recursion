#include<iostream>
using namespace std;

void helper(int n, int cnt, int first = 0, int second = 1) {
  // Base Case
  if(cnt == 0) {
    return;
  }

  if(cnt == n) {
    cout<<"0 ";
    first = 0;
  }
  if(cnt == n-1) {
    cout<<"1 ";
    second = 1;
  }
  // Recursive Case
  cout<<first + second<<" ";
  helper(n, cnt - 1, second, first + second);

  return ;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  helper(n, n);
  return 0;
}
