class Solution {
public:

    bool isZero(int num ){
        if(num < 9) return false  ;
        while(num > 0) {
            int rem = num%10 ;
            if(rem == 0) return true ;
            num = num/10 ; 
        }
        return false ;

    }

    vector<int> getNoZeroIntegers(int n) {
       int a , b;
        for(int i=1;i<=n ; i++){
            a = i ;
            b = n-i ;
            if(isZero(a) || isZero(b)) {
                continue ;
            }
            else if(a+b == n) {
                break ;
            }
        }

        return {a , b} ;





    }
};
