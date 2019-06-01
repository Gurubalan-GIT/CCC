/*
 * Created Date: Saturday June 1st 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */




package codes;

import java.util.Arrays;

public class check_EqualityArrays {

	public static void main(String[] args) {
	int a[]= {2,8,5,6,9};
	int b[]={2,8,5,6,9};
	
	Boolean status= Arrays.equals(a, b);
	if(status)
	{
		System.out.println("Arrays are Equals");
	}
	
	else
	{
		System.out.println("Arrays are UnEquals");
	}

	}

}
