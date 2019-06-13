#include<bits/stdc++.h>
using namespace std;
//  Vertices are numbered from 0 to n-1
int main(){
	int n,e;  // n--number of vertices of graph    e--number of edges in graph
	cin>>n>>e;
	int**edges=new int*[n];   //  create a 2D n*n adjacent matrix to maintain to maintain a record of vertices which are adjacent to each other 
	for(int i=0;i<n;i++){     //    this matrix created is known as adjacency matrix
		edges[i]=new int[n]; 
		for(int j=0;j<n;j++){
			edges[i][j]=0;    // initialise the matrix with all 0---it emphasizes that initially no vertex is connected to other vertex
		}					  // intialise with -1 in case of weighted graph	
	}
	for(int i=0;i<e;i++){   //   run a loop for number of edges 
		int f,s;          //  f,s--vertices that are adjacent to each other
		cin>>f>>s;
		edges[f][s]=1;    //  marks edges[f][s]=1   1 implies that there is an edge between vertex f and vertex s
		edges[s][f]=1;    //  mark edges[s][f]=1    if there is an edge from f to s then there is also an edge from s to f (case of an unidirected graph)
		                  // we can initialize edges[f][s]=w where w is the weight of the graph in case of weighted graph  
	}
	// adjacency matrix takes up space but they are easy to implement and insertion and deletion of an edge becomes O(1)
	 
	
	return 0;
}
