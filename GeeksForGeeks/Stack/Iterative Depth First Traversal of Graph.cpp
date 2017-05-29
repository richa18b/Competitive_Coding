/* Iterative Depth First Traversal of Graph 
[October 23, 2015] */    
 
#include<bits/stdc++.h> 
using namespace std; 
 
class Graph 
{ 
   int v; 
   list<int> *adj; 
   public: 
     Graph(int v)  
    { 
       this->v=v; 
       adj=new list<int>[v]; 
    } 
     
     void addEdge(int v,int w); 
     void DFS(int s); 
}; 
 
void Graph::addEdge(int v,int w) 
{ 
   adj[v].push_back(w); 
} 
 
void Graph::DFS(int s) 
{ 
   bool *visited=new bool[v]; 
   memset(visited,false,sizeof visited); 
   
   stack<int> stack; 
   
   visited[s]=true; 
   stack.push(s); 
   
   list<int>::iterator i; 
   while(!stack.empty()) 
  { 
     s=stack.top(); 
     cout<<s<<" "; 
     stack.pop(); 
     
     for(i=adj[s].begin();i!=adj[s].end();++i) 
    { 
       if(!visited[*i]) 
      { visited[*i]=true; stack.push(*i); } 
    } 
  } 
} 
 
int main() 
{ 
   Graph g(5); 
   
   g.addEdge(1,0); 
   g.addEdge(0,3); 
   g.addEdge(3,4); 
   g.addEdge(4,0); 
   g.addEdge(0,2); 
   g.addEdge(2,1); 
   
   g.DFS(0); 
   
   return 0; 
} 