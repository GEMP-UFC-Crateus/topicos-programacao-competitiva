// 2.2.1 Generating Subsets

#include <bits/stdc++.h> 
using namespace std; 

int n =  3;
vector<int> subset;

void search(int k) {
  
  if (k == n + 1) {
    
    cout <<"(";
    
    for (auto i = subset.begin(); i != subset.end(); ++i){
      
      cout << *i ;
    }
    
    cout <<")";
  }
  else {
    
    subset.push_back(k);
    search(k + 1);
    subset.pop_back();
    search(k + 1);
  }
}

int main(){
  
  search(1);
  
  cout << "\n";
  
  return 0;
}