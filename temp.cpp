#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  for(int i = 0; i<26; i++) {
    cout<<"\""<<char(65 + i)<<"\", ";
  }
  return 0;
}
