/*-----------------------------------------------------------------------

Problem Title: Mars Exploration
Problem Link: https://www.hackerrank.com/challenges/mars-exploration
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String S = in.next(),str="SOS";
        int len=S.length();
        for(int i=1;i<len/3;i++)
         str+="SOS";
        int d=0;
        for(int i=0;i<str.length();i++)
        {
          if(str.charAt(i)!=S.charAt(i))
          {
              d++;
          }
        }
        System.out.println(d);
    }
}

