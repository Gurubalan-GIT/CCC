/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;

public class MissingNumber_UnsortedArray {

	public static void main(String[] args) {

		int a[] = { 1, 2, 4, 6, 3, 7, 8 };
		int s = 0;
		int size = a.length;
		for (int i = 0; i < a.length; i++) {
			s = s + a[i];
		}

		// We are using the formula n(n+1)/2
		int totalSum = ((size + 1) * (size + 2)) / 2;

		System.out.println("Missing number is  " + (totalSum - s));

	}

}
