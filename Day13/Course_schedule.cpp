class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

    vector<vector<int>>adjList(numCourses) ;

    vector<int>InDegree(numCourses,0) ;

    for(auto edge: prerequisites) {
        int course = edge[0] ;
        int prereq = edge[1] ;
        adjList[prereq].push_back(course) ;
        InDegree[course]++ ;
    }

    queue<int>q ;

    int count = 0 ;

    for(int i=0;i<numCourses; i++){
        if(InDegree[i] == 0) {
            q.push(i) ;
        }
    }

    while(!q.empty() ){

        int node = q.front() ;
        q.pop() ;
        count++ ;
        for(int neighbour : adjList[node]) {
            InDegree[neighbour]-- ;
            if(InDegree[neighbour] == 0) {
                q.push(neighbour) ;
            }
        }


    }


    if(count == numCourses) return true ;
    return false ;




    }



};
