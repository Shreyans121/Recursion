#include<iostream>
#include<cmath>
using namespace std;

// Problem --
// "1234" -> 1234
// "1234" => GreenBox(helper(123) * 10^i) + 4

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(string str, int i) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i < 0) {
    return 0;
  }
  // Recursive Call
  return (str[i] - '0') * pow(10, str.length()-i-1) + (helper(str, i-1));
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;
  // Function Call
  cout<<helper(str, str.length()-1) + 1;

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
