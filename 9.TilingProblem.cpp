#include<iostream>
using namespace std;

// Problem
// Floor of size 4xN and we have tiles of length of 1x4 and 4x1
// SubProblems
// GreenBox(4x(N-4)) + GreenBox(4x(N-1))

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction

int cnt;
int helper(int n) {
  // Base Case
  // where normal recursive rule is not being followed

  if(n < 4) {
    return 1;
  }
  // Recursive Call
  return (helper(n-4)) + (helper(n-1));
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
