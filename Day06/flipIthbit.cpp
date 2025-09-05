#include <iostream> 
#include <algorithm>
#include <climits> 
#include <vector> 
#include <string>

using namespace std ;


int main() {

     int a = 10 ; // 1010
     int i = 1 ; // bit should be 1000 ;

     int bigmagic = 1<<i ;
     
     int ans = a ^ bigmagic ;

     cout<<ans; // ans should be 8 


}