/*
 * Created Date: Monday June 17th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
import java.util.LinkedList;
import java.util.Scanner;

public class MergeSort {
    public static void main(String[] args){
        //List A
        LinkedList<Integer> linkedList=new LinkedList<>();
        Scanner scanner=new Scanner(System.in);
        int na,data,temp;
        System.out.println("Enter number of nodes of list A -");
        na=scanner.nextInt();
        System.out.println("Enter the values -");
        while(na!=0){
            data=scanner.nextInt();
            linkedList.addLast(data);
            na--;
        }
        //List B
        LinkedList<Integer> linkedList1 =new LinkedList<>();
        System.out.println("Enter number of nodes of list B -");
        int nb=scanner.nextInt();
        System.out.println("Enter the values ");
        while (nb!=0){
            data=scanner.nextInt();
            linkedList1.addLast(data);
            nb--;
        }
        //Now appending A and B
        linkedList1.addAll(linkedList);
        System.out.println("Before sorting - Merged list -");
        System.out.println(linkedList1);
        //Sorting the appended list
        for(int i=0;i<linkedList1.size();i++){
            for(int j=i+1;j<linkedList1.size();j++) {
                if (linkedList1.get(i) > linkedList1.get(j)) {
                    temp=linkedList1.get(i);
                    linkedList1.set(i,linkedList1.get(j));
                    linkedList1.set(j,temp);
                }
            }
        }
        System.out.println("After Sorting -");
        System.out.println(linkedList1);
    }
}
