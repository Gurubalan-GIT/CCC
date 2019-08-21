/*
 * Created Date: Sunday August 18th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */

/*Goldman Sachs 2020 
Basically you need to return an array consisting the products of all the other elements in the array 
except your current element (Index) */
import java.util.*;

class ArrayProduct{
    public static final Scanner scanner=new Scanner(System.in);
    public static void main(String[] args){
        int n=scanner.nextInt();
        List<Integer> list=new ArrayList<>();

        for(int i:arrayProduct(n, list)){
            System.out.print(i+" ");
        }

    }

    public static List<Integer> arrayProduct(int n,List<Integer> list){

        int product=1;
        
        List<Integer> result=new ArrayList<>();
        for(int i=0;i<n;i++){
            int element=scanner.nextInt();
            list.add(element);
        }
        for(int i=0;i<list.size();i++){
            for(int j=0;j<list.size();j++){
                if(i!=j){
                    product*=list.get(j);
                }
            }
            result.add(product);
            product=1;
        }

        return result;
    }
}