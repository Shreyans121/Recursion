#include<iostream>
using namespace std;

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction

// ret 1 + 2 + 3 .. (n-2) + (n-1) + n
void helper(int n, int &sum) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n == 0) {
    return;
  }
  // Recursive Call
  sum += n;
  helper(n-1, sum);
}

int main(int argc, char const *argv[]) {
  int n = 5, sum = 0;
  // Function Call
  helper(n, sum);
  std::cout << sum << '\n';
  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
