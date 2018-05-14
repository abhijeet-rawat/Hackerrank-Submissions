/*-----------------------------------------------------------------------

Problem Title: Designer PDF Viewer
Problem Link: https://www.hackerrank.com/challenges/designer-pdf-viewer
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = 26;
        int h[] = new int[n];
        for(int h_i=0; h_i < n; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        int max=-1;
        for(int i=0;i<word.length();i++)
        {
          if(max< h[word.charAt(i)-97])
          {
            max= h[word.charAt(i)-97];
          }
        }
       System.out.println(max*word.length()); 
    }
}

