package guru.algorithms.datastructures.linkedlist.linkedlist_trivial;

public class SLLDeleteAt {
    public static void main(String[] args){
        LinkedList linkedList=new LinkedList();
        int nodes,index;
        System.out.println("Enter number of nodes-");
        nodes=LinkedList.scanner.nextInt();
        System.out.println("Enter data:");
        linkedList.addMultipleLast(nodes);
        System.out.println("Enter index to be deleted-");
        index=LinkedList.scanner.nextInt();
        System.out.println("Before deletion-");
        linkedList.show();
        linkedList.deleteAt(index);
        System.out.println("After deletion-");
        linkedList.show();
    }
}
