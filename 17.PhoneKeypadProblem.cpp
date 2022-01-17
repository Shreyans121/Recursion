#include<iostream>
#include<vector>
using namespace std;

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(string str, vector<char> keypad[], string op = "", int i = 0) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i >= str.size()) {
    cout<<op<<" ";
    return;
  }

  // Recursive Call
  int num = str[i] - '0';
  int len = keypad[num].size();

  for(int j = 0; j<len; j++) {
    helper(str, keypad, op + keypad[num][j], i+1);
  }
}

int main(int argc, char const *argv[]) {
  string str;
  cin>>str;

  vector<char> keypad[] =
  {
    {}, {},        // 0 and 1 digit don't have any characters associated
    { 'a', 'b', 'c' },
    { 'd', 'e', 'f' },
    { 'g', 'h', 'i' },
    { 'j', 'k', 'l' },
    { 'm', 'n', 'o' },
    { 'p', 'q', 'r', 's'},
    { 't', 'u', 'v' },
    { 'w', 'x', 'y', 'z'}
  };

  // Function Call
  helper(str, keypad);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
