#include<iostream>
using namespace std;

// Problem
// abxcpiorpipdpix -> abxc3.14or3.14pd3.14x
// abxc3.14or3.14pd3.14x => a + GreenBox(bxcpiorpipdpix)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(string str, string pi, string &op, int i) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i == str.length()-2 and str[i] != 'p') {
    return;
  }

  if(i == str.length()) {
    return;
  }

  // Recursive Call
  if(str[i] == 'p' and str[i+1] == 'i') {
    op += pi;
    helper(str, pi, op, i+2);
  }
  else {
    op += str[i];
    helper(str, pi, op, i+1);
  }
  return;
}

int main(int argc, char const *argv[]) {
  string str, pi = "3.14", op = "";
  cin>>str;
  // Function Call
  helper(str, pi, op, 0);
  cout<<op;

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
