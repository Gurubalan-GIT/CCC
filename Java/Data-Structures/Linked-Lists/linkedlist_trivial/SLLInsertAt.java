package guru.algorithms.datastructures.linkedlist.linkedlist_trivial;

public class SLLInsertAt {
    public static void main(String[] args){
        LinkedList linkedList=new LinkedList();
        int nodes,index,data;
        System.out.println("Enter number of nodes-");
        nodes=LinkedList.scanner.nextInt();
        System.out.println("Enter the values-");
        linkedList.addMultipleLast(nodes);
        System.out.println("Enter the index and the data for the new node to be inserted");
        index=LinkedList.scanner.nextInt();
        data=LinkedList.scanner.nextInt();
        linkedList.addAt(index,data);
        linkedList.show();
    }
}
