#include<iostream>
using namespace std;

// Problem
// Floor of size 4xN and we have tiles of length of 1x4 and 4x1

int helper(int n) {
  // Base Case
  if(n < 4) {
    return 1;
  }

  // Recursive Case
  return helper(n-4) + helper(n-1);
}


int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  cout<<helper(n);
  return 0;
}
