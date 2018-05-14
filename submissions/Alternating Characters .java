/*-----------------------------------------------------------------------

Problem Title: Alternating Characters 
Problem Link: https://www.hackerrank.com/challenges/alternating-characters
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;

public class Solution
{
    public static void main(String[] args)
    {
      Scanner kb=new Scanner(System.in);
      int t;
      t=kb.nextInt();
      kb.nextLine();  
      while(t--!=0)
      {
         String str=kb.nextLine();
         int del=0;
         char prev=str.charAt(0);
         for(int i=0;i<str.length();i++)
         {
           if(i!=0)
           {
             if(prev!=str.charAt(i))
             {
               prev=str.charAt(i);  
             }
             else
             {
               del++;  
             }    
           }
         }  
        System.out.println(del);  
      }  
    }
}
