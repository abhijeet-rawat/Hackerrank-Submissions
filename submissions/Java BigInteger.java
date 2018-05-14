/*-----------------------------------------------------------------------

Problem Title: Java BigInteger
Problem Link: https://www.hackerrank.com/challenges/java-biginteger
Author: abhijeet_rawat
Language : Java 7

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
       String str1,str2; 
       Scanner kb=new Scanner(System.in);
       str1=kb.nextLine();
       BigInteger obj1=new BigInteger(str1);
       str2=kb.nextLine();
       BigInteger obj2=new BigInteger(str2);
       System.out.println((obj1.add(obj2)).toString());
       System.out.println((obj1.multiply(obj2)).toString()); 
        
    }
}
