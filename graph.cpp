#include<iostream>
 #include<string>
 #include<list>
using namespace std;
 
 class graph{
    int v;
    list<int>* l;

    public:
    graph(int v){
     this->v = v;
     l = new list<int> [v];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[u].push_back(u);
    }
 };
 
 int main() {
             graph g1();

 return 0;   
}