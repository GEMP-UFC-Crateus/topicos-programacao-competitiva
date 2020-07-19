/* 
  Note that the C++ standard library also has the function next_permutation
  that can be used to generate permutations. The function is given a permutation, and
  it produces the next permutation in lexicographic order. The following code goes
  through the permutations of {1, 2, . . . , n}:
*/

#include <bits/stdc++.h> 
using namespace std; 

const int n = 3;
vector<char> permutation;

int main(){

  for (int i = 1; i <= n; i++) {
    
    permutation.push_back(i);
  }
  
  do {
    
    cout <<"(";
    
    for (auto i = permutation.begin(); i != permutation.end(); ++i){
      
      cout << *i ;
    }
    
    cout <<")";
    
  } while (next_permutation(permutation.begin(), permutation.end()));
  
  return 0;
}


