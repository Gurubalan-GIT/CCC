/*
 * Created Date: Sunday August 18th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */

import java.util.*;
class One{
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        int count=0;
        int m=scanner.nextInt();
        int n=scanner.nextInt();
        String num;
        for(int i=m;i<=n;i++){
            num=Integer.toString(i);
            for(int j=0;j<num.length();j++){
                for(int k=j+1;k<num.length();k++){
                    if(num.charAt(j)==num.charAt(k)){
                        count++;
                        break;
                    }
                }
            }
        }
        System.out.println((n-m)-count);
    }
}