/*-----------------------------------------------------------------------

Problem Title: Recursive Digit Sum
Problem Link: https://www.hackerrank.com/challenges/recursive-digit-sum
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


//package Error;
import java.util.Scanner;
/**
 *
 * @author ABHIJEETPC
 */
public class RecursiveDigitSum
{
  public static void main(String args[])
  {
    Scanner kb=new Scanner(System.in);
    String str;
    long k;
    str=kb.nextLine();
    String arr[]=str.split(" ");
    
    str=arr[0];
    k=Integer.parseInt(arr[1]);
    long sum=0;
    for(int i=0;i<str.length();i++)
    {
        sum+=str.charAt(i)-'0';   
    }
    sum=sum*k;
    System.out.println(recurse(sum+""));
  }
  static int recurse(String str)
  {
    if(str.length()==1)
    {
      return str.charAt(0)-'0';
    }
    else
    {
      long sum=0;  
      for(int i=0;i<str.length();i++)
      {
        sum+=str.charAt(i)-'0';   
      }
      return recurse(sum+"");
    }
  }
}

