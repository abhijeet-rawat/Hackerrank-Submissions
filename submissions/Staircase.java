/*-----------------------------------------------------------------------

Problem Title: Staircase
Problem Link: https://www.hackerrank.com/challenges/staircase
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
    {
      int n;  
      Scanner kb=new Scanner(System.in);
      n=kb.nextInt();  
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n-i;j++)
        {
          System.out.print(" ");    
        }
        for(int j=1;j<=i;j++)
        {
          System.out.print("#");  
        }    
        System.out.println();  
      }
    }
}
