#include<iostream>
 #include<string>
 #include<list>
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

 };
 
 int main() {
             
    graph g(8);
    g.addEdge(4,6);
    g.addEdge(4,2   );
    g.addEdge(4,7);

    g.print();
 return 0;   
}