#include<iostream>
using namespace std;

// return -> 1+2+3+4+5...+(n-2)+(n-1)+n
// Trust the function -- Leap of Faith
int print_sum(int n) {
  // Base Case
  if(n == 0) {
    return 0;
  }
  int left_part = print_sum(n-1);
  return left_part + n;
}

int main(int argc, char const *argv[]) {
  int n = 5;
  cout<<print_sum(n);
  return 0;
}
