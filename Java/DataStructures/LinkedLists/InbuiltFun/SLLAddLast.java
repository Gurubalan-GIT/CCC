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

public class SLLAddLast {
    @SuppressWarnings("Duplicates")
    public static void main(String[] args) {
        LinkedList<Integer> linkedList = new LinkedList<>();
        int n, data;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        while (n != 0) {
            data = scanner.nextInt();
            linkedList.addLast(data);
            n--;
        }
        System.out.println("Printing Linked Lists (Adding Last)");
        Iterator<Integer> iterator = linkedList.iterator();
        Iterator<Integer> integerIterator1 = linkedList.iterator();
        while(iterator.hasNext()){
            if(integerIterator1.next().equals(linkedList.getLast())){
                System.out.println(iterator.next());
                break;
            }
            else {
                System.out.print(iterator.next()+"->");
            }
        }
    }
}
