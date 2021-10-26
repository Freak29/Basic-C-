#include "bits/stdc++.h"
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int>adj[N];


void dfs(int node)
	{
		//prorder
		vis[node]=1;
		cout<<node<<" ";
		
		//inorder
		vector<int>::iterator it;
		for(it=adj[node].begin() ; it != adj[node].end();it++ )
		{
			if(vis[*it]);
			else
			{
				dfs(*it);
			}
			
		}
	}
	
	
int main(){
	
	int noOfNodes,noOfEdges;
	cout<<"Enter Number of nodes";
	cin>>noOfNodes;
	cout<<"Enter Number of edges";
    cin>>noOfEdges;
	int x,y;
	for(int i=0;i<=noOfNodes;i++)
	{
		vis[i]=false;
	}
	for(int i=0;i<noOfEdges;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
    dfs(1);
	return 0;
}
