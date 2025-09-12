#include <iostream> 
#include <algorithm> 
#include <climits> 
#include <vector>

using namespace std ;
// directed and unweighted graph 

int main() {

    int vertex , edges ;

    cin>> vertex >> edges ;

      vector < vector< int >> adjList(vertex) ;
      int u , v   ;
    for(int i=0; i < edges ; i++){
        cin>>u >> v ;
        adjList[u].push_back(v) ;
    }


    for(int i=0 ; i<vertex ;i++ ){
        cout<<i <<"->" ;
        for(int ele : adjList[i]){
            cout<<ele << " " ;
        }
        cout<<endl; 
        
    }


}