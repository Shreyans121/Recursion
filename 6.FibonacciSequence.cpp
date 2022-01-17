#include<iostream>
using namespace std;

// Print nth fibonacci term

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n == 0 or n == 1) {
    return 0;
  }

  if(n == 2) {
    return 1;
  }
  // Recursive Call -- GreenBox
  int sum = helper(n-1) + helper(n-2);
  return sum;
}

// Recurrance Relation f(n) = f(n-1) + f(n-2)

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  // Function Call
  cout<<helper(n);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes
