import java.util.LinkedList;
import java.util.Scanner;
//Problem Statement : Print the linked list where all the nodes are greater than it's previous ones.
public class SLLRightSide {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        LinkedList<Integer> linkedList=new LinkedList<>();
        int na,data;
        na=scanner.nextInt();
        while(na!=0){
            data=scanner.nextInt();
            linkedList.add(data);
            na--;
        }
        System.out.println(linkedList);
        for(int i=0;i<linkedList.size();i++){
            for(int j=i+1;j<linkedList.size();j++) {
                if(linkedList.get(i)<linkedList.get(j)){
                    linkedList.remove(i);
                }
            }
        }
        System.out.println(linkedList);
    }
}
