#include<iostream>
using namespace std;

// Problem
// Number of Binary String of length N, that has no Consecutive ones
//// if append 0 then 2 options
//// if append 1 then 1 options
//// 0 + GreenBox(n-1)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n == 1) {
    return 2;
  }

  if(n == 0) {
    return 1;
  }

  // Recursive Call
  return helper(n-1) + helper(n-2);
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  // Function Call
  cout<<helper(n);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
