//Program Description: https://www.hackerrank.com/challenges/day-of-the-programmer/problem
//Program Solution:

#include <bits/stdc++.h>
#include <string>

using namespace std;
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

string solve(int year){
     ostringstream day_of_programmer;
     string sep = ".09.";
     int sum;
     int no_of_days = 256;
     int months[] = {31,28,31,30,31,30,31,31};
    if(year>=1700 && year<= 2700){
        if(year>=1700 && year<=1917){
            if(year%4==0){
                swap(months[1],29);
                    for(int i=0;i<8;i++){
                       sum+=months[i];
                    }
                     day_of_programmer<<no_of_days-244<<sep<<year;  
                    
            }
            else if(year%4!=0){
                for(int i=0;i<8;i++){
                       sum+=months[i];
                    }
                     day_of_programmer<<no_of_days-243<<sep<<year;      
            }
        }
            else if(year == 1918){
                    day_of_programmer<<no_of_days-230<<sep<<year; 
               }
            else if(year>1918 && year<=2700){
                if(year%4==0 && !(year%100==0) ){
                   swap(months[1],29);
                    for(int i=0;i<8;i++){
                       sum+=months[i];
                    }
                     day_of_programmer<<no_of_days-244<<sep<<year;    
                }
                else if (year%400==0) {
                    for(int i=0;i<8;i++){
                       sum+=months[i];
                    }
                    day_of_programmer<<no_of_days-244<<sep<<year;  
                }
                else
                    day_of_programmer<<no_of_days-243<<sep<<year;  
                
              
            }
            
        }
    else{
        cout<<"Incorrect year";
    }
    
    return day_of_programmer.str();
    
}
    
int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
