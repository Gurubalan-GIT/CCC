/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * Description: https://www.spoj.com/problems/STPAR/
 */
import java.util.*;
import java.lang.*;
import java.io.*;
class Main {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int t;
        String s[];
        Stack < Integer > stack;
        int arr[], darr[];
        //check the input is 0 or not
        while ((t = Integer.parseInt(bf.readLine().trim())) != 0) {
            s = bf.readLine().trim().split("\\s+");
            stack = new Stack < Integer > ();
            arr = new int[t]; //read the elements
            darr = new int[t]; //store for further use
            for (int i = 0; i < t; i++)
                arr[i] = Integer.parseInt(s[i]);

            int j = 0;
            for (int i = 0; i < t; i++) {
                //pop until stack is empty and top ele is greater than current ele.
                while (!stack.isEmpty() && stack.peek() < arr[i]) {
                    darr[j++] = stack.peek();
                    stack.pop();
                }
                stack.push(arr[i]);
            }
            //pop remaining ele.
            while (!stack.isEmpty()) {
                darr[j++] = stack.pop();
            }
            boolean flag = true;
            //check if sorted
            for (int i = 0; i < t - 1; i++) {
                if (darr[i] > darr[i + 1]) {
                    System.out.println("no");
                    flag = false;
                    break;
                }
            }
            if (flag)
                System.out.println("yes");

        }

    }

    /*
    INPUT 
5 
5 1 2 4 3 
5 
4 1 5 3 2 
0 
OUTPUT 
yes 
no */

}