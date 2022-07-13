#include <iostream>
#include <bits/stdc++.h>

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
  vector<pair<int,int>> graph[vtces];
  

  int edges;
  cin >> edges;

  for (int i = 0; i < edges; i++ ) {
    int u, v, w; 
    cin >> u >> v >> w; 
 
    graph[u].push_back({v,w});
    graph[v].push_back({u,w});

  } 
  int src;  
  cin >> src;  

    // wsf,vtx,psf,
  priority_queue<pair<int,pair<int,string>>,vector<pair<int,pair<int,string>>>,greater<pair<int,pair<int,string>>>  
  > pq;
   vector<bool> vis(vtces,0);
  pq.push({0,{src,to_string(src)+""}});
  while(!pq.empty()){
    int wsf=pq.top().first;
    int node=pq.top().second.first;
    string psf=pq.top().second.second;
    pq.pop();
   if(vis[node]==1) continue;
     vis[node]=1;


     cout<<node<<" via "<<psf<<" @ "<<wsf<<endl;
     for(auto it=graph[node].begin();it!=graph[node].end();it++){
       int neigh=it->first;
       int weight=it->second;
       if(!vis[neigh]){
         pq.push({wsf+weight,{neigh,psf+to_string(neigh)}});
       }
     }
  }
     
   
  return 0;
}