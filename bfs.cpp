#include<iostream>
 #include<string>
 #include<list>
 #include<vector>
 #include<queue>
using namespace std;
 
 class graph{
      
    int v;
    list<int>* adj;

    public:
    graph(int v){
        this->v = v;
        adj = new list<int> [v];
    }

    void addEdge(int v, int u){
         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    void print(){
        for ( int i = 0; i < v; i++)
        {
              cout << i << "->";
              for(int neigh : adj[i]){
                cout << neigh <<" ";
              };
              cout << " " << endl;
        }
        
    }

    void bfs(int start){
        vector<bool> visited(v, false);
        queue<int> q;
         
        q.push(start);
        visited[start]=true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            for(int neigh: adj[curr]){
                if (!visited[neigh])
                {
                    visited[neigh]=true;
                    q.push(neigh);
                }
                
            }

        }
    }

 };
 
 int main() {
             
    graph g(11);
g.addEdge(1, 2);
g.addEdge(1, 3);
g.addEdge(2, 4);
g.addEdge(2, 5);
g.addEdge(3, 6);
g.addEdge(3, 7);
g.addEdge(4, 8);
g.addEdge(5, 8);
g.addEdge(6, 9);
g.addEdge(7, 10);

    
    g.bfs(4);
 return 0;   
}