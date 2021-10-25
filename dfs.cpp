//dfs for graph: TC: o(n+e)
//SC: o(n)+o(n)
#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<int>&vis,vector<int>&adj[]){
	cout<<node<<" ";
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[it]){
			dfs(it,vis,adj);
		}
	}
}



int main(){
	int e,n;
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
			dfs(i,vis,adj);
		}
	}
}
