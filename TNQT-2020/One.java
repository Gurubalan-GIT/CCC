/*
 * Created Date: Sunday August 18th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
// TCS Digital 2020 - Count the number with unique digits in a range 
import java.util.*;

class One{

    public static int CountNumbersHavingUniqueDigits(int min, int max) {
        int count = 0;
        for (int i = min; i <= max; i++) {
            if (checkUniqueDigits(i)) {
                count++;
            }
        }
        return count;
    }
   
    public static boolean checkUniqueDigits(int number) {
        int[] appearingDigits = new int[10];
        while (number > 0) {
            int digit = number % 10;
            appearingDigits[digit]++;
            number /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (appearingDigits[i] > 1) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        int start=scanner.nextInt();
        int end=scanner.nextInt();
        System.out.println(CountNumbersHavingUniqueDigits(start,end));
        scanner.close();
    }
}