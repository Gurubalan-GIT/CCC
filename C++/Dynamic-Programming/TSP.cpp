#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;
vector< vector<int> > memo,G,cost;
int dfs(int state, int s, int n, int head)
{
	if(state == ((1<<n)-1)) return cost[head][s];
	if(memo[state][s]!=-1) return memo[state][s];
	int ans = INF;
	for(int i=0;i<G[s].size();++i)
	{
		int u = G[s][i];
		if(!(state & (1<<(u-1))))
		{
			ans = min(ans, cost[s][u]+dfs(state|(1<<(u-1)),u,n,head));
		}
	}
	memo[state][s] = ans;
	return ans;
	
}
int main()
{
	int n;
	cin>>n;//no of nodes
	G.resize(n+1);
	int e;
	cin>>e;//no of edges
	cost.resize(n+1, vector<int>(n+1,INF));
	for(int i=1;i<=n;++i) cost[i][i] = 0;//travelling to sell requires 0
	for(int i=0;i<e;++i)
	{ 
		int a,b,w;
		cin>>a>>b>>w;//edges from with weights
		G[a].push_back(b);
		G[b].push_back(a);
		cost[a][b] = w;
		cost[b][a] = w;
	}
	memo.resize(1<<n, vector<int>(n+1,-1));
	cout<<dfs(1,1,n,1)<<endl;
	//Basically DFS from any point because cycle so, will give same answer.
	//Try
	/*
	4
	6
	1 2 10
	1 3 15
	1 4 20
	2 4 25
	3 4 30
	2 3 35
	Output - 80
	*/
}
