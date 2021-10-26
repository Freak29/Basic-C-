// kahn's algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,e;
	cin>>n;
	cin>>e;
	vector<int>adj[n+1];
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	queue<int>q;
	vector<int>indegree(n,0);
	for(int i=0;i<n;i++){
		for(auto it: adj[i]){
			indegree[it]++;
		}
	}
	
	for(int i=0;i<n;i++)
	{
	
		if(indegree[i]==0)
		{
			q.push(i);
		}
		
	} 
	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<" ";
		for(auto it:adj[node]){
			indegree[it]--;
			if(indegree[it]==0){
				q.push(it);
			}
		}
	}
	return 0;
}
