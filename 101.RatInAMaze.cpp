#include<iostream>
using namespace std;

// TRUST your Function -- Take a LEAP OF FAITH
// Proof by Mathematical Induction
bool helper(char maze[10][10], int sol[10][10], int i, int j, int m, int n, int cnt) {
  // Base Case
  // where normal recursive rule is not being followed
  if(i == m and j == n) {
    sol[m][n] = 1;
    cnt++;
    for(int i = 0; i<=n; i++) {
      for(int j = 0; j<=m; j++) {
        cout<<sol[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    return true;
  }

  if(i > m or j > n) {
    return false;
  }

  if(maze[i][j] == 'X') {
    sol[i][j] = 2;
    return false;
  }

  // Recursive Call
  sol[i][j] = 1;

  bool rightSuccess = helper(maze, sol, i, j+1, m, n, cnt);
  bool leftSuccess = helper(maze, sol, i+1, j, m, n, cnt);

  // Backtracking Call
  sol[i][j] = 0;
  if(rightSuccess or leftSuccess) {
    return true;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  char maze[10][10] = {
    "0000",
    "00X0",
    "000X",
    "0X00",
  };

  int sol[10][10] = {0};
  // Function Call
  bool ans = helper(maze, sol, 0, 0, 3, 3 , 0);

  if(!ans) {
    cout<<"No Path found";
  }

  return 0;
}

// How to Find GreenBox (Sub-Problem)?
//// Take small inputs and find how answer changes

// Flow of Recursive Function?
//// first write the recurrance relation and then write base case
//// where it fails
