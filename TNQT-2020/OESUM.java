/*
 * Created Date: Monday August 5th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
/* This was asked in TNQT 2020, sum of odd and even numbers and the difference between them */
import java.util.*;
class OESUM {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int range=scanner.nextInt();
        int sumodd=0,sumeven=0;
        for(int r=1;r<=range;r++){
            if(r%2!=0){
                sumodd+=r;
            }else{
                sumeven+=r;
            }
        }
        if(sumeven>sumodd){
            System.out.println(sumeven-sumodd);
        }else{
            System.out.println(sumodd-sumeven);
        }
        scanner.close();
    }
}