#include <iostream>
#include <algorithm>
#include <climits> 
#include <vector>
using namespace std ;

int M = 1e9 +7 ;

vector<int > t ;


int solve(int day , int delay , int forget , vector<int>&t){
    if(day == 1) return 1 ;
    if(t[day] != -1) return t[day] ;
    int result = 0 ;
    if(day > 0) {
        
        for(int prev = day - forget + 1 ; prev <= day -delay ; prev++) {
            if(prev > 0) {
                result = result + solve(prev , delay , forget , t) ;
            }
        }
    }
    return t[day] =  result ;


}

int peopleAwareOfSecret(int n  , int delay , int forget ) {

    int total = 0 ;

    t.assign(n+1 , -1) ; 
 
    for(int day = n-forget+1 ; day <= n ; day++){
        if(day > 0) {
          total = (total + solve(day , delay , forget , t)) % M ;
        }

    }

    return  total ;



}


int main() {

int n = 6 ;
int delay = 2 ;
int forget = 4 ;

int ans = peopleAwareOfSecret(n , delay , forget) ;

cout<<ans ;




}