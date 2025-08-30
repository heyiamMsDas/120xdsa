#include <iostream> 
#include <algorithm>
#include <climits>
#include <vector> 
#include <string> 
using namespace std ;

string  print_lcs(string &s1 , string &s2) {

    int n =s1.size() ;
    int m = s2.size() ;

    vector<vector<int>>dp(n+1 , vector<int>(m+1 , -1)) ;

    for(int j=0;j<=m;j++) dp[0][j]=0 ;
    for(int i=0 ; i<=n ; i++) dp[i][0] = 0 ;

    for(int i=1 ; i<=n ; i++) {
        for(int j = 1 ; j<=m ; j++) {
            if(s1[i-1] == s2[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1] ;
            }
            else dp[i][j] = max(dp[i][j-1] , dp[i-1][j]) ;
        }
    }
    int len = dp[n][m] ;
    string ans = "" ; 
    for(int i=0;i<len;i++){
        ans += "$" ;
    }

    int i =  n; 
    int j = m ;
    int index = len -1 ;
    while(i > 0 && j >0 ) {

        if(s1[i-1] == s2[j-1]) {
            ans[index] = s1[i-1] ;
            index-- ;
            i-- ; 
            j-- ; 
        }

       else if(dp[i-1][j] > dp[i][j-1]) {
            i-- ;
        }
        else j-- ;
    }

    return ans ;


}



int main() {

    string  s1 = "abcde" ;
    string s2 = "bde" ;


  string ans =  print_lcs(s1 , s2) ;

    cout<<ans ;

}