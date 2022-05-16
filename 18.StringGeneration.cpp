#include<iostream>
#include<vector>
using namespace std;

// Problem
// 1214 -> (1)(2)(1)(4), (12)(1)(4), (1)(21)(4), (1)(2)(14), (12)(14)
//// 1 + (GreenBox) or 12 + (GreenBox)

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(string str, vector<char> mp, string op = "", int i = 0) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i >= str.size()) {
    cout<<op<<" ";
    return;
  }

  // Recursive Call
  int tens = str[i] - '0';

  helper(str, mp, op + mp[tens], i+1);
  if(str[i+1] != '\0') {
    int ones = str[i+1] - '0';
    int num = tens * 10 + ones;
    if(num > 0 and num <=26) {
      helper(str, mp, op + mp[num], i+2);
    }
  }
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;

  vector<char> mp(27);
  // mp[0] = "";
  for(int i = 1; i<=26; i++) {
    mp[i] = char(65 + i - 1);
  }
  // Function Call
  helper(str, mp);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
