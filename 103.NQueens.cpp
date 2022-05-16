#include<iostream>
using namespace std;

// Problem
// Place Queen in Row 1(after checking) + GreenBox(n-1 rows)

bool isSafe(int board[10][10], int row, int j, int n) {
  // Check for column
  for(int i = 0; i<row; i++) {
    if(board[i][j] == 1) {
      return false;
    }
  }

  // Check for left diagnol
  int cdl = j-1;
  int rdl = row - 1;
  while(cdl >= 0 and rdl >= 0) {
    if(board[rdl][cdl] == 1) {
      return false;
    }
    cdl--;
    rdl--;
  }

  // Check for right diagnol
  int cdr = j-1;
  int rdr = row - 1;
  while(cdr < n and rdr >= 0) {
    if(board[rdr][cdr] == 1) {
      return false;
    }
    cdr++;
    rdr--;
  }

  return true;
}

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
bool helper(int board[][10], int row, int n) {
  // Base Case
  // where normal recursive rule is not being followed
  if(row >= n) {
    for(int i = 0; i<n; i++) {
      for(int j = 0; j<n; j++) {
        cout<<board[i][j];
      }
      cout<<endl;
    }
    cout<<endl;
    return true;
  }
  // Recursive Call
  for(int j = 0; j<n; j++) {
    if(isSafe(board, row, j, n)) {
      board[row][j] = 1;
      bool isPossible = helper(board, row+1, n);
      if(isPossible) {
        return true;
      }
      board[row][j] = 0;
    }
  }
  return false;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  int board[10][10] = {0};
  // Function Call
  bool isPossible = helper(board, 0, n);

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
