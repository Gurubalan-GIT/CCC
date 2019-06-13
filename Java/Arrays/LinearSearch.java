/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;

import java.util.Scanner;

public class LinearSearch {

	public static void main(String[] args) {
		int a[] = { 2, 7, 1, 6, 87 };
		int val;
		System.out.println("Enter the number to search");
		Scanner sc = new Scanner(System.in);
		val = sc.nextInt();
		sc.close();
		for (int i = 0; i < a.length; i++) {
			if (a[i] == val) {
				System.out.println("The value is present at index " + i + " in a array");
				break;
			}

		}

	}

}
/* OUTPUT
Enter the number to search
6
The value is present at index 3 in a array 
*/
