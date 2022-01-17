#include<iostream>
using namespace std;

// Problem
// n disks -> to a pole w/ help of a tertiary pole in inc order from top -> return number of steps we can achieve that

//// Here GreenBox is the n-1 tiles
//// We move the n-1 to auxilary tower and place the largest tile onto Dest Tower
//// Then Recursively move the other n-1 tiles to Dest Tower

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
void helper(int n, char src, char aux, char dest) {
  // Base Case
  // where normal recursive rule is not being followed
  if(n==0) {
    return;
  }

  // Recursive Call
  helper(n-1, src, dest, aux);
  cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<"\n";
  helper(n-1, aux, src, dest);

}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  // Function Call
  helper(n, 'A', 'B', 'C');

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
