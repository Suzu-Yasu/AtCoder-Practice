#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  bool YN = false;
  for(int j = 0; j < 4; j++){
  if(data.at(j) == data.at(j + 1)){
    YN = true;
  }}
  if(YN == true){
    cout << "YES" << endl;
  }
  else{ 
    cout << "NO" << endl;
}};
