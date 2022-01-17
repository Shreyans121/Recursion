#include<iostream>
using namespace std;

// Problem
// n = 2 then print all the valid combination of n pair brackets
//// n == 0 -> return
//// n == 1 -> ()
//// n == 2 -> ( => 2options -> ( or )
////           ()() or (())

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(int n, string op, int open, int close) {
  // Base Case
  // where normal recursive rule is not being followed
  if(close == n) {
    cout<<op<<"\n";
    return;
  }

  if(open < close) {
    return;
  }

  // Recursive Call
  if(open == close) {
    // op += '(';
    helper(n, op + '(', open + 1, close);
  }
  else if(open == n) {
    // op += ')';
    helper(n, op + ')', open, close + 1);
  }
  else if(open > close) {
    // op += '(';
    helper(n, op + '(', open + 1, close);

    // op += ')';
    helper(n, op + ')', open, close + 1);
  }
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  string op = "";
  // Function Call
  helper(n, op, 0, 0);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
