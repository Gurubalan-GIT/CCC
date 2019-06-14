package guru.algorithms.datastructures.queues.queues_inbuilt;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Enqueue {
    public static void main(String[] args){
        Queue<Integer> queue=new LinkedList<>();
        Scanner scanner=new Scanner(System.in);
        int n,data;
        System.out.println("Enter the number of elements you want to enqueue-");
        n=scanner.nextInt();
        System.out.println("Enter the values you want to enqueue- ");
        while(n!=0){
            data=scanner.nextInt();
            queue.add(data);
            n--;
        }
        System.out.println(queue);
    }
}
