//detect cycle in graph using BFS
#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int s,int n,vector<int>adj[],vector<int>& vis) {
	
    queue<pair<int,int>> q;
    vis[s]=1;
    q.push({s,-1});
    
    while(!q.empty()){
    	int node=q.front().first;
    	int par=q.front().second;
    	q.pop();
    	
    	for(auto i:adj[node]){
    		if(!vis[i]){
    			vis[i]=1;
    			q.push({i,node});
			}
			else if(par!=i){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int n,e;
	cin>>n>>e;
	vector<int>adj[n+1];
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		
	}
	vector<int>vis(n+1,0);
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			if(checkCycle(i,n,adj,vis)){
				cout<<"true";
			}
		}
	}
	
    return 0;
}
