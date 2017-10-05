//Program Description: https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
   
    int sum =0 , money=0;

    ar.erase (ar.begin()+k);
    if(k < n){
    for(int i=0;i<ar.size();i++){

        sum+=ar[i];
    } 
    if(b == 0.5*sum){
        
        cout<<"Bon Appetit";
    }
      
    else
        cout<<b - 0.5*sum;
    } 
   
    return 0;
}
