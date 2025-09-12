#include <iostream> 
#include <algorithm> 
#include <climits> 
#include <vector>

using namespace std ;
// undirected and weighted graph 

int main() {

    int vertex , edges ;

    cin>> vertex >> edges ;

      vector < vector< pair<int , int> >> adjList(vertex) ;
      int u , v  , weight;
    for(int i=0; i < edges ; i++){
        cin>>u >> v >> weight ;
        adjList[u].push_back(make_pair(v,weight)) ;        
    }


    for(int i=0 ; i<vertex ;i++ ){
        cout<<i <<"->" ;
        for(int j = 0 ; j < adjList[i].size() ; j++ ){
            cout<<"{"<<adjList[i][j].first << " "<<adjList[i][j].second <<"}";
        }
        cout<<endl; 
        
    }


}