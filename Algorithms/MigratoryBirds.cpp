// Problem Description: https://www.hackerrank.com/challenges/migratory-birds/problem
// Use counting sort algorithm (invented by Harold Steward) in order to find the occurences first and then highest number of occurances.

#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    
      vector <int> findmax(n);
      int maximum = 0;
      int position = 0;
   
    
      for(int i = 0; i < n; i++){

          findmax[ar[i]]+=1;
      
      } 
        
    
    for(int i = 0 ; i < n ; i++)
            
    {
            
        if(maximum < findmax[i]){
               
                maximum = findmax[i];
                
            position = i;
            
        }
        
    }   
 
    return position;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
