#include <iostream> 
#include <algorithm> 
#include <climits>
#include <vector> 
#include <queue>

using namespace std ;

void BFS(int start ,vector<vector<int>>&adjList , int vertex  ) {

    vector<bool>visited(vertex , false) ;

    queue<int> q ;

    visited[start] = true ;
    q.push(start) ;

    while(!q.empty()) {

        int node = q.front() ;
        q.pop() ;

        cout<<node<<" " ;

        // Traverse all neighbors

        for(int neighbor : adjList[node]) {

            if(!visited[neighbor]) {

                visited[neighbor]  = true ;
                
                q.push(neighbor) ;

            }


        }






    }





}


int main() {

    int vertex , edges ;
    cin>>vertex >> edges ;

     vector<vector<int>> adjList(vertex);

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        // For undirected graph
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int start ; 
    cout<<"Enter the start node :" ;
    cin>>start ;


    cout << "BFS Traversal starting from " << start << ": ";
    BFS(start, adjList, vertex);



}