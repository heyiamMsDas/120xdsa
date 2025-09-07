#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
     int test ;
    cin>>test ;
    while(test--){
        int N , K ;
        cin>>N >> K ;
        int count = 0 ;
        while(N--){
            int x ;
            cin>>x ;
            if(x > K) count++ ;
        }
        cout<<count<<endl;     
    }
}

