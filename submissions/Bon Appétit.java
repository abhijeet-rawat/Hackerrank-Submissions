/*-----------------------------------------------------------------------

Problem Title: Bon Appétit
Problem Link: https://www.hackerrank.com/challenges/bon-appetit
Author: abhijeet_rawat
Language : Java 7

-----------------------------------------------------------------------*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
public class Solution {

    public static void main(String[] args) 
    {
       Scanner kb=new Scanner(System.in);
        int n,k,i;
        long charge;
        long sum=0;
        n=kb.nextInt();
        k=kb.nextInt();
       int arr[]=new int[n]; 
        for(i=0;i<n;i++)
        {
          arr[i]=kb.nextInt();
            if(i!=k)
            {
              sum+=arr[i];  
            }
        }
       charge=kb.nextLong(); 
       if(sum/2==charge)
       {
         System.out.println("Bon Appetit");    
       }
        else
        {
          System.out.println(charge-sum/2);  
        }    
    }
}
