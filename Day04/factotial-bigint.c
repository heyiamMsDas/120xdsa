#include <bits/stdc++.h>

using namespace std;

 void factorial(int n) {
     
     if(n == 0 || n==1) {
         cout<<1 ;
         return ;
     }
  
  vector<int>res(1,1) ;
  
  for(int i=2; i<=n ;i++){
      
      int carry = 0 ;
      
      for(int j=0 ;j< res.size();j++){
          
          int prod = res[j] * i + carry ;
          
          res[j] = prod %10 ;
          carry = prod / 10 ;
          
      }
      
      while(carry){
          
          res.push_back(carry %10) ;
          carry = carry / 10 ;
          
          
      }
       
      
   }
  
  
  
  
  reverse(res.begin() , res.end()) ;
  
  
  for(int i=0;i<res.size();i++){
      cout<<res[i];
  }

    
 }


int main() {
	// your code goes here
	
	int t ;
	cin>> t ;
	while(t--){
	    int x ;
	    cin>>x ;
	    factorial(x) ; 
	    cout<<endl; 
	}

}
