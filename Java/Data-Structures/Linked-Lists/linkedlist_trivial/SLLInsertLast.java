package guru.algorithms.datastructures.linkedlist.linkedlist_trivial;

public class SLLInsertLast {
    public static void main(String[] args){
        LinkedList linkedList=new LinkedList();
        int node;
        System.out.println("Enter number of nodes-");
        node=LinkedList.scanner.nextInt();
        System.out.println("Enter data-");
        linkedList.addMultipleLast(node);
        linkedList.show();
    }
}
