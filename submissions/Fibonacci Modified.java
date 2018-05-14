/*-----------------------------------------------------------------------

Problem Title: Fibonacci Modified
Problem Link: https://www.hackerrank.com/challenges/fibonacci-modified
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.util.Scanner;
import java.math.BigInteger;
/**
 *
 * @author ABHIJEETPC
 */
class FibonacciModified
{
  public static void main(String args[])
  {
    Scanner kb=new Scanner(System.in);
    int t1,t2,n;
    t1=kb.nextInt();
    t2=kb.nextInt();
    n=kb.nextInt();
    BigInteger obj[]=new BigInteger[n+1];
    obj[1]=BigInteger.valueOf(t1);
    obj[2]=BigInteger.valueOf(t2);
    for(int i=3;i<=n;i++)
    {
     obj[i]=obj[i-2].add(obj[i-1].multiply(obj[i-1]));
    }
    System.out.println(obj[n].toString());
  }
}

