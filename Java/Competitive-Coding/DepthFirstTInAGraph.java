/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Description: Traversal algorithm that is used in solving various problems: Cycle detection,path finding,Minimum spanning tree
 */

import java.util.*;
import java.io.*;
class DFS
{
	int vertices;
	LinkedList<Integer>list[];
	DFS()
	{
	 	
	}
void addEdge(int ele1,int ele2){
list[ele1].add(ele2);}
	//create a linkedlist array that acts as a graph 
	DFS(int v)
	{
		vertices=v;
		list=new LinkedList[v];
		for(int i=0;i<v;i++)
			list[i]=new LinkedList<>();
	}
	void DFSTUtil(int v,boolean visit[])
	{
		
		System.out.println(v);
		visit[v]=true;
		Iterator<Integer>iterator=list[v].listIterator();
		while(iterator.hasNext())
		{
			int i=iterator.next();
			if(!visit[i])
				DFSTUtil(i,visit);
		}
	}
	//traverse from a given vertex
	void DFST()
	{
		boolean visited[]=new boolean[vertices];
		   for(int i=0;i<vertices;i++)
		   {  if(!visited[i]){
			  DFSTUtil(i,visited);
		   }
		   }
	}
	void DFST(int vertex)
	{
		boolean visited[]=new boolean[vertices];
		
			DFSTUtil(vertex,visited);
	}
	
	
	
	
	public static void main(String []args)
	{
		//0 1 2 3 4
		
		DFS dfs=new DFS(5);
		
		dfs.addEdge(0,1);
		dfs.addEdge(0,2);
		dfs.addEdge(1,2);
		dfs.addEdge(1,4);
		dfs.addEdge(2,3);
		dfs.addEdge(3,4);
		
		//dfs.DFST(2);--> Traverses throught reachable nodes only
		dfs.DFST(); // Traverses all nodes
		
	}
}