// 2.2.2 Generating Permutations

#include <bits/stdc++.h> 
using namespace std; 

const int n = 3;

vector<int> permutation;
bool chosen[n+1];

void search() {
  
  if (permutation.size() == n) {
    
    cout <<"(";
    
    for (auto i = permutation.begin(); i != permutation.end(); ++i){
      
      cout << *i ;
    }
    
    cout <<")";
  }
  else {
    
    for (int i = 1; i <= n; i++) {
      
      if (chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();        
    }
  }
}

int main(){
  
  search();
  
  cout << "\n";
  
  return 0;
}