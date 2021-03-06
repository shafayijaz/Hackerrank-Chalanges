// Apple and Oranges Algorithm Implementation Challenge, HackerRank.
// Problem Description: https://www.hackerrank.com/challenges/apple-and-orange/problem

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
   vector <int> diff_a;
   vector <int> diff_o;
    int count_a=0;
    int count_o=0;
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    for(int i=0;i<apple.size();i++ ){

            
        diff_a.push_back(a + apple[i] );
        
    }
    
    for(int i=0;i<orange.size();i++ ){

            
        diff_o.push_back(b + orange[i] );
        
    }
      
    for(int i = 0;i <diff_a.size();i++){
        
    
        if(diff_a[i]>=s && diff_a[i]<=t){

        
            ++count_a;
    
        }
    }
     for(int i =  0;i<diff_o.size();i++){
        
    
        if(diff_o[i]>=s && diff_o[i]<=t){

        
            ++count_o;
    
        }   
        
    
    }
        
        cout<<count_a;
    
        cout<<"\n"<<count_o;

  
    return 0;
}
