#include<iostream>
using namespace std;

// Problem
// Print all subsequence of the ip string
//// At every step you have 2 options
//// 1. Include str[i] + GreenBox(str[i..n])
//// 2. GreenBox(str[i..n])

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(string str, string op, int n, int i) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i == n) {
    cout<<op<<" ";
    return;
  }

  // Recursive Call
  // op += str[i];
  helper(str, op + str[i], n, i+1);
  helper(str, op, n, i+1);
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  string str, op = "";
  cin>>str;
  // Function Call
  helper(str, op, n, 0);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
