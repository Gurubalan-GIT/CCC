package guru.algorithms.datastructures.stacks.stacks_inbuilt;

import java.util.*;
import java.util.Stack;

public class StackPush {
    public static void main(String[] args){
        Stack <Integer> stack = new Stack<>();
        int n,data;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        while (n!=0){
            data=sc.nextInt();
            stack.push(data);
            n--;
        }
        //We can also use iterators and many other ways
        for(Integer element : stack){
            System.out.print(element);
        }
    }
}
