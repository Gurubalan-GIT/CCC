/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;
import java.util.TreeSet;

public class element_Appers_OnlyOnce {

	//function which find number  
    static int singleNumber(int a[], int n) 
    { 
        TreeSet<Integer> s = new TreeSet<Integer>(); 
        for (int i : a) 
        { 
            s.add(i); 
        } 
  
        int arr_sum = 0;//sum of array 
        for (int i : a)  
        { 
            arr_sum += i; 
        } 
  
        int set_sum = 0;//sum of set 
        for (int i : s)  
        { 
            set_sum += i; 
        } 
  
        //applying the formula. 
        return (3 * set_sum - arr_sum) / 2; 
  
    } 
  
    //Driver code 
    public static void main(String[] args) 
    { 
        int a[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7}; 
        int n = a.length; 
        System.out.println("The element with single " +  
                        "occurrence is " + singleNumber(a, n)); 
    } 
}  
