#include<iostream>
using namespace std;

void helper(int n, int&sum) {
  if(n == 0) {
    return;
  }

  int disit = n % 10;
  n /= 10;
  sum += disit;

  helper(n, sum);
  return;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  int sum = 0;

  helper(n, sum);
  cout<<sum;

  return 0;
}
