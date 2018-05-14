/*-----------------------------------------------------------------------

Problem Title: Angry Professor
Problem Link: https://www.hackerrank.com/challenges/angry-professor
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
    {
      Scanner kb=new Scanner(System.in);
      int t,k,n,count;
        t=kb.nextInt();
        while(t--!=0)
        {
          n=kb.nextInt();
          k=kb.nextInt();
            count=0;
          int arr[]=new int[n];  
          for(int i=0;i<n;i++)
          {
             arr[i]=kb.nextInt();
             if(arr[i]<=0)
             {
                 count++;
             }   
          }
         if(count<k)
         {
           System.out.println("YES");  
         }
         else
         {
           System.out.println("NO");  
         }    
        }    
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
