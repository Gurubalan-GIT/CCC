/**
 * Created Date:  June 1st 2019
 * @author ganesh chowdhary sadanala
 * Email-ID: ganesh8374387106@gmail.com
 * -----
 * Two strings are said to be anagrams if the characters in two both the strings are same whether or not in the same order
 *
 *program to check if two strings are anagrams
 */
 
 //package com.ganesh.code;
 
  import java.io.*; 
  import java.util.*; 
  

 public class StringAnagram
 {
  
    
    static boolean areAnagram(String str1, String str2) 
    { 
        if(str1.length() != str2.length()){
            return false;
        } 
		 
        HashMap<Character, Integer> map1 = new HashMap<Character, Integer>(); 
        HashMap<Character, Integer> map2 = new HashMap<Character, Integer>(); 
         
		 /*
		 one way to find is using hashmap
		 */
		 
        // Mapping first string 
        for (int i = 0; i < str1.length(); i++) { 
  
           if(map1.get(str1.charAt(i))!=null)
			   map1.put(str1.charAt(i),map1.get(str1.charAt(i))+1);
		   else
			   map1.put(str1.charAt(i),1);
        } 
  
        // Mapping second String 
        for (int j = 0; j < str2.length(); j++) { 
  
             if(map2.get(str2.charAt(j))!=null)
			   map2.put(str2.charAt(j),map2.get(str2.charAt(j))+1);
		   else
			   map2.put(str2.charAt(j),1);
        } 
  
        if (map1.equals(map2)) 
            return true; 
        else
            return false; 
    } 
	
	/*
	another way is using Arrays sort() method
	*/
	static boolean areAnagrams(String s1, String s2) 
    { 
         //convert into char Arrays
		 
		 char str1[]=s1.toCharArray();
		 char str2[]=s2.toCharArray();
		 
         // Get lenghts of both strings 
        int n1 = str1.length; 
        int n2 = str2.length; 
  
        // If length of both strings is not same, 
        // then they cannot be anagram 
        if (n1 != n2) 
            return false; 
  
        // Sort both strings 
        Arrays.sort(str1); 
        Arrays.sort(str2); 
  
        // Compare sorted strings 
        for (int i = 0; i < n1; i++) 
            if (str1[i] != str2[i]) 
                return false; 
  
        return true; 
    } 
  
    // Test function 
    public static void test(String str1, String str2) 
    { 
  
        System.out.println("Strings to be checked are:\n"
                           + str1 + "\n" + str2 + "\n"); 
  
        // Find the result 
        if (areAnagram(str1, str2)) 
            System.out.println("The two strings are"
                               + "anagram of each other\n"); 
        else
            System.out.println("The two strings are not"
                               + " anagram of each other\n"); 
    } 
  
    // Driver program 
    public static void main(String args[]) 
    { 
  
        // Get the Strings 
        String str1 = "github"; 
        String str2 = "hubgit"; 
  
        // Test the Strings 
        test(str1, str2); //true
  
        // Get the Strings 
        str1 = "git"; 
        str2 = "github"; 
  
        // Test the Strings 
        test(str1, str2); //false
    } 
} 

 
 