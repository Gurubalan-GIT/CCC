/*
 * Created Date: Monday June 17th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
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
