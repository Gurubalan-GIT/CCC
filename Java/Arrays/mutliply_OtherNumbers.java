/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */


package codes;

import java.util.ArrayList;

import java.util.Iterator;

import java.util.List;

public class mutliply_OtherNumbers {

	public static void main(String[] args) {

		int a[] = { 3, 5, 6, 2 };

		List a2 = new ArrayList();

		for (int i = 0; i < a.length; i++) {

			int p1 = 1;

			for (int j = 0; j < a.length; j++) {

				if (i != j) {

					p1 = p1 * a[j];

				}

			}

			a2.add(p1);

		}

		Iterator itr = a2.iterator();

		while (itr.hasNext()) {

			System.out.print(itr.next() + " ");

		}

	}

}