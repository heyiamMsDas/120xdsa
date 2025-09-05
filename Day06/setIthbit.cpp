// set ith bit
#include <iostream> 
#include <algorithm>
#include <climits> 
#include <vector> 
#include <string>

using namespace std ;


int main() {
    
    int a = 10 ;

    int L = 2 ;

    int bigmagic = (1<<L) ;

    cout<< (a | bigmagic ) ;

}