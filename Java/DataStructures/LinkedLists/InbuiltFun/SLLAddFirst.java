/*
 * Created Date: Monday June 17th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
import java.util.*;

public class SLLAddFirst {
    public static void main(String[] args){
        LinkedList<Integer> linkedList = new LinkedList<>();
        Scanner scanner=new Scanner(System.in);
        int n,data;
        n=scanner.nextInt();
        while(n!=0){
            data=scanner.nextInt();
            linkedList.addFirst(data);
            n--;
        }
        Iterator<Integer> integerIterator = linkedList.iterator();
        Iterator<Integer> integerIterator1 = linkedList.iterator();
        System.out.println("Printing Linked Lists (Adding first)");
        while(integerIterator.hasNext()){
            if(integerIterator1.next().equals(linkedList.getLast())){
                System.out.println(integerIterator.next());
                break;
            }else {
                System.out.print(integerIterator.next()+"->");
            }
        }

    }
}
