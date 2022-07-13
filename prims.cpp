#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Edge
{  
public:
  int src = 0; 
  int nbr = 0;
  int wt = 0;

  Edge(int src, int nbr, int wt)
  {
    this->src = src; 
    this->nbr = nbr;
    this->wt = wt;
  }
};

 

int main() {                                                        
    
  int vtces;
  cin >> vtces;
  vector<vector<Edge>> graph(vtces, vector<Edge>());
  int edges;
  cin >> edges;

  for (int i = 0; i < edges; i++ ) {
    int u, v, w; 
    cin >> u >> v >> w; 
 
    graph[u].push_back(Edge(u, v, w));
    graph[v].push_back(Edge(v, u, w));

  }   
  vector<bool> vis(vtces,false);
// wt,vtx,parent,
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
pq.push({0,{0,-1}});
bool flag=false;
   while(pq.size()>0){
      int w=pq.top().first;
      int prnt=pq.top().second.second;
      int node=pq.top().second.first;
      pq.pop();
      if(vis[node]==true) continue;
      vis[node]=true;
      
      if(prnt!=-1)
      cout<<"["<<node<<"-"<<prnt<<"@"<<w<<"]"<<endl;
       flag=true;
      for(Edge ed:graph[node]){
        if(!vis[ed.nbr]){
          pq.push({ed.wt,{ed.nbr,node}});
        }
      }
   }
  
  return 0;
}