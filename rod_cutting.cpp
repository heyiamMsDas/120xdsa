#include<bits/stdc++.h>
using namespace std ;


int f(int  i , vector<int > &price , int tot , vector<vector<int>> &dp) {
    
    if(i == 0) {
        return tot* price[0] ;
    }

    if(dp[i][tot] != -1) return dp[i][tot] ;

    
    int notTake = f(i-1 , price , tot ,dp) ;

    int take = -1e9 ;
    int rodLength = i + 1 ;
    if(rodLength <= tot) {
        take = price[i] + f(i , price , tot-rodLength , dp) ; // supply of the rod piece is infinite
    }
    return dp[i][tot] = max(take , notTake) ; // TC :O(n^2) // if dont use dp then it will be O(2^n) 


}



int cutRod(vector<int> &price) {

     int n = price.size() ;
     int tot = n ;   // total number of pieces of rod 

     vector<vector<int>> dp(n , vector<int> (tot+1 , -1));

     return f(n-1 , price , tot ,dp) ;

}



int main() {
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20} ;

    int answer = cutRod(price) ;

    cout<<answer ;
    
}