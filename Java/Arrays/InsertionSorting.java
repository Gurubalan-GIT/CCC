/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;

public class InsertionSorting {

	public static void main(String[] args) {

		int a[] = { 2, 15, 56, 88, 3, 0, 12 };
		int l = a.length;
		int i, j, temp, key;

		for (i = 1; i < l; i++) {
			key = a[i];
			j = i - 1;
			// This is ascending order code;
			// for descending we just need to change key > a[j] in while loop
			while (j >= 0 && key < a[j]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				j--;
			}

		}

		// Print the sorted array....
		for (i = 0; i < l; i++) {
			System.out.print(a[i] + " ");
		}

	}

}
//OUTPUT
// 0 2 3 12 15 56 88 
