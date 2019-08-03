/*
 * Created Date: Thursday August 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */

// A String maipulation question asked in TCS Digital
/*  Input : 2 addition 3 multiply 5 
    Output : 17 
    So you have to take care of the Order as well.
    So we have to do this for - Add, multiply, subtract and divide!
*/
import java.util.*;
class SM1 {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        System.out.println("enter the value!");
        String input=scanner.nextLine();
        String[] arr=input.split(" ");
        int result=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i].equals("multiply")){
                result=Integer.parseInt(arr[i-1])*Integer.parseInt(arr[i+1]);
            }else if(arr[i].equals("divide")){
                result=Integer.parseInt(arr[i-1])/Integer.parseInt(arr[i+1]);
            }else if(arr[i].equals("add")){
                result=Integer.parseInt(arr[i-1])+Integer.parseInt(arr[i+1]);
            }else if(arr[i].equals("subtract")){
                result=Integer.parseInt(arr[i-1])-Integer.parseInt(arr[i+1]);
            }
        }
        System.out.println(result);
    }
}