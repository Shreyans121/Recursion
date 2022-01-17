#include<iostream>
using namespace std;

// Problem
// Ladder has N steps and we can jump only 1, 2 or 3 steps at a time
// SubProblem -- GreenBox(n-1) + GreenBox(n-2) + GreenBox(n-3)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n == 0) {
    return 1;
  }

  if(n < 0) {
    return 0;
  }

  // Recursive Call
  return helper(n-1) + helper(n-2) + helper(n-3);
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
