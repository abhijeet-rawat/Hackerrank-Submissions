/*-----------------------------------------------------------------------

Problem Title: Solve Me First
Problem Link: https://www.hackerrank.com/challenges/solve-me-first
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int solveMeFirst(int a, int b) {
         // Hint: Type return a+b; below 
         return a+b;
   }

   
 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        a = in.nextInt();
        int b;
        b = in.nextInt();
        int sum;
        sum = solveMeFirst(a, b);
        System.out.println(sum);
   }
}

