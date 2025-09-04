#include<bits/stdc++.h>
using namespace std ;
void permute(vector<char>&arr , int l , int r){

    if(l == r) {
        for(char c: arr) cout<<c;
        cout<<endl;
        return ;
    }


    for(int i=l;i<=r ;i++){
        swap(arr[l] , arr[i]) ;
        permute(arr , l+1 , r);
        swap(arr[l] , arr[i]) ;
    }


}


int main() {


    vector<char> arr = {'A','B' ,'C'} ;

    cout<<"All permutations are :"<<endl; 

    permute(arr , 0 , arr.size()-1) ;


}