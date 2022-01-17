#include<iostream>
using namespace std;

void helper() {
  // Base Case

  // Recursive Call
}

int main(int argc, char const *argv[]) {
  int n, arr[100];
  cin>>n;

  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }
  // Function Call
  helper(arr, n);

  return 0;
}
