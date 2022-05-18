#include<iostream>
using namespace std;

// Print
// 1 2 3 ... n
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 ... n

void helper(int n, int i = 0) {
  if(n == 1) {
    cout<<"1"<<endl;
    return;
  }

  for(int i = 1; i<=n; i++) {
    cout<<i<<" ";
  }
  cout<<endl;
  helper(n-1);
  for(int i = 1; i<=n; i++) {
    cout<<i<<" ";
  }
  cout<<endl;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  helper(n);
  return 0;
}
