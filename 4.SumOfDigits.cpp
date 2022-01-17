#include<iostream>
using namespace std;

int helper(int n) {
  // Base Case
  if(n == 0) {
    return 0;
  }
  // Recursive Call
  // 4573 -> (4573 % 10) / 10
  // 4573 => GreenBox[Sum(457)] + 3
  int sum = helper(n/10);
  return sum + (n%10);
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  // Function Call
  cout<<helper(n);

  return 0;
}
