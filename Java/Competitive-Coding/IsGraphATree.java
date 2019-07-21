/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * ----
 */
import java.util.*;
import java.lang.*;
import java.lang.*;
import java.io.*;
class IsGraphTree
{
	LinkedList<Integer> list[];
	int vertices;
	IsGraphTree()
	{}
	IsGraphTree(int v)
	{
		vertices=v;
		list=new LinkedList[v];
		for(int i=0;i<vertices;i++)
		  list[i]=new LinkedList();
	}
	void addEdge(int v1,int v2)
	{
	   list[v1].add(v2);
	   list[v2].add(v1);
	}
	
	boolean isCycle(int v,boolean []visited,int parent)
	{
		visited[v]=true;
		    
		Iterator<Integer> iterator=list[v].iterator();
		
		while(iterator.hasNext())
		{
			int i=iterator.next();
			if(!visited[i])
			  { if(isCycle(i,visited,v))
			         return true;}
			else if(i!=parent)
			  return true;
			  
		}
		return false;
	}
	boolean isTree()
	{
		boolean []visited=new boolean[vertices];
		//check if cyclic or not
	          if(isCycle(0,visited,-1))
		 	      return false;
		/* For a graph to become tree no. of edges=vertices-1,
		   - path to every node or vertex (no path if disconnected)
		   - Acyclic */
		       for(int i=0;i<vertices;i++)
		         {
		         	if(!visited[i])
		         	  return false;
		         }
		         return true;
		 
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
		
		String s[]=bf.readLine().trim().split(" ");
		int v=Integer.parseInt(s[0]);
		IsGraphTree isgraphtree=new IsGraphTree(v);
		int e=Integer.parseInt(s[1]);
		int v1=0,v2=0;
		while(e-->0)
		{
			s=bf.readLine().trim().split(" ");
			v1=Integer.parseInt(s[0]);
			v2=Integer.parseInt(s[1]);
			isgraphtree.addEdge(v1-1,v2-1);
		}
		   boolean result=isgraphtree.isTree();
		   if(result)
		   System.out.println("YES");
		   else
		   System.out.println("NO");
		}
		
	}