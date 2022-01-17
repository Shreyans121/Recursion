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

void helper(int n) {
  // Base Case
  if(n == 1) {
    cout<<"1"<<endl;
    return;
  }

  // Recursive Call
  // FOR REVERSE ANSWER
  for(int i = 1; i<=n; i++) {
    cout<<i<<" ";
  }
  cout<<"\n";
  helper(n-1);
  for(int i = 1; i<=n; i++) {
    cout<<i<<" ";
  }
  cout<<"\n";
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  // Function Call
  helper(n);

  return 0;
}
