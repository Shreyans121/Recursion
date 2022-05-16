#include<iostream>
#include<cstring>
using namespace std;

// Problem
// abc -> Print all permutations -> abc, acb, bac, bca, cab, cba
//// a + GreenBox(bc), b + GreenBox(ac), c + GreenBox(ab)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(string &str, int pos, int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(str[pos] == '\0') {
    cout<<str<<endl;
    return;
  }
  // Recursive Call
  for(int i = pos; str[i] != '\0'; i++) {
    swap(str[pos], str[i]);
    helper(str, pos + 1, n);
    swap(str[pos], str[i]);
  }
}

int main(int argc, char const *argv[]) {
  string str = "abc";
  // Function Call
  helper(str, 0, 0);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
