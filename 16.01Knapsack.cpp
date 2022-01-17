#include<iostream>
#include<vector>
using namespace std;

// Problem
// W kg -> Fill to maximize the profit
// a1 a2 a3 ... an
//// W - a1 && profit += P(a1)
//// 2 options
//// 1. if w[i] <= W => then either take it or ignore it
//// 2. if w[i] > W => then not possible to take, so ignore it

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
int helper(int n, int w, vector<int> wts, vector<int> prices, int i = 0) {
  // Base Case
  // where normal recursive rule is not being followed
  if(w <= 0 or i >= n) {
    return 0;
  }

  // Recursive Call
  if(wts[i] <= w) {
    return max(prices[i] + helper(n, w - wts[i], wts, prices, i+1), helper(n, w, wts, prices, i+1));
  }
  else {
    return helper(n, w, wts, prices, i+1);
  }
}

int main(int argc, char const *argv[]) {
  int n, w;
  cin>>n>>w;

  vector<int> wts(n), prices(n);
  for(int i=0; i<n; i++) {
    cin>>wts[i];
  }

  for(int i=0; i<n; i++) {
    cin>>prices[i];
  }

  // Function Call
  cout<<helper(n, w, wts, prices);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
