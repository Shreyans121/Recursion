#include<iostream>
using namespace std;

// Problem
// N Friends -- Can go as couple or stag, number of ways they can go to the party
// f(n) = f(n-1) + f(n-2)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n == 0) {
    return 1;
  }
  if(n<0) {
    return 0;
  }
  // Recursive Call
  return 1*helper(n-1) + (n-1)*helper(n-2);
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
