package guru.algorithms.datastructures.linkedlist.linkedlist_inbuilt;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class SLLReversal {
    @SuppressWarnings("Duplicates")
    public static void main(String[] args) {
        LinkedList<Integer> linkedList1 = new LinkedList<>();
        int node, data;
        Scanner scanner = new Scanner(System.in);
        node = scanner.nextInt();
        while (node != 0) {
            data = scanner.nextInt();
            linkedList1.addLast(data);
            node--;
        }
        Iterator iterator = linkedList1.descendingIterator();
        Iterator iterator1 = linkedList1.descendingIterator();
        while(iterator.hasNext()){
            if(iterator1.next().equals(linkedList1.getFirst())){
                System.out.println(iterator.next());
                break;
            }
            System.out.print(iterator.next()+"->");
        }
    }
}
