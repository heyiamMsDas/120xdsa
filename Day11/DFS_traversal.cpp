#include <iostream> 
#include <algorithm> 
#include <climits> 
#include <vector> 
#include <stack> 

using namespace std ;

void DFS(int start , vector<vector<int>>&adjList , vector<bool> &visited ) {

    stack<int> st ;

    st.push(start) ;

    while(!st.empty()) {
        int node = st.top() ;
        st.pop() ;
        if(!visited[node]) {
            visited[node] = true ;
            cout<<node<<" " ;

            for(int neighbor : adjList[node]) {

                if(!visited[neighbor]) {
                    st.push(neighbor) ;
                }


            }



        }


    }
    




}


int main () {

    int vertex , edges ;
    cin>>vertex >> edges  ;

    vector<vector<int>> adjList (vertex) ;

    

    for(int i = 0 ; i<edges ; i++){
        int  u , v ;

        cin>>u>>v ;

        adjList[u].push_back(v) ;
        adjList[v].push_back(u) ;

    }


    int start ; 
    cout<<"Enter the starting node:" ;
    cin>>start ; 

    vector<bool>visited(vertex, false) ;
    cout<<"DFS traversal starting from " <<start<<" :"<<endl;

    DFS(start  , adjList , visited) ;

}