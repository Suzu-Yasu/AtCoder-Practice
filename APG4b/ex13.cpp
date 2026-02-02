#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int A;
  A = 0;
  vector<int> test(N);
  for (int i = 0; i < N; i++) {
    cin >> test.at(i);
    A += test.at(i);
  }
  
  int Ave = A / N;
  
    for (int i = 0; i < N; i++) {
     cout << std::abs(Ave - test.at(i)) << endl;
  }}
  
  
 
