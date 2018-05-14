/*-----------------------------------------------------------------------

Problem Title: Super Reduced String
Problem Link: https://www.hackerrank.com/challenges/reduced-string
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
    {
       Scanner kb=new Scanner(System.in);
        String str="",str1="";
        str=kb.next();
       for(int i=0;i<str.length();i++)
       {
         if(str1.equals(""))
         {
           str1=str1+str.charAt(i);    
         }
         else
         {
            if(str1.charAt(str1.length()-1)==str.charAt(i))
            {
              str1=str1.substring(0,str1.length()-1);  
            }
            else
            {
                str1=str1+str.charAt(i);
            }
         }
       }
        if(str1.equals(""))
        {
         System.out.println("Empty String");   
        }
        else
        {
         System.out.println(str1);    
        }    
    }
}
