package guru.algorithms.datastructures.linkedlist.linkedlist_trivial;

import static guru.algorithms.datastructures.linkedlist.linkedlist_trivial.LinkedList.scanner;

public class DeleteItem {
    public static void main(String[] args){
        int nodes,data;
        LinkedList linkedList=new LinkedList();
        nodes= scanner.nextInt();
        linkedList.addMultipleLast(nodes);
        data=scanner.nextInt();
        //linkedList.deleteData(data);
        linkedList.show();
    }
}
