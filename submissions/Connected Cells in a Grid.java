/*-----------------------------------------------------------------------

Problem Title: Connected Cells in a Grid
Problem Link: https://www.hackerrank.com/challenges/connected-cell-in-a-grid
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.util.Scanner;
/**
 *
 * @author ABHIJEETPC
 */
class ConnectedCellsInGrid 
{
  public static int arr[][],aux[][],brr[][];
  public static final int initial=0,visited=1,finished=2;
  public static int status[],maxvisit=0,colsize,answer=0; 
  public static void main(String args[])
  {
    Scanner kb=new Scanner(System.in);
    int n,m,counter=0;
    n=kb.nextInt();
    m=kb.nextInt();
    arr=new int[n][m];
    aux=new int[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        arr[i][j]=kb.nextInt();
        aux[i][j]=counter;
        counter++;
      }
    }
    brr=new int[n*m][n*m];
    status=new int[n*m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(arr[i][j]==1){   
        if(i==0 && j==0)
        {
           if(arr[i+1][j+1]==1)
           {
             brr[aux[i][j]][aux[i+1][j+1]]=1;   
           }
           if(arr[i+1][j]==1)
           {
             brr[aux[i][j]][aux[i+1][j]]=1;  
           }
           if(arr[i][j+1]==1)
           {
             brr[aux[i][j]][aux[i][j+1]]=1;  
           }
        }
        else if(i==0 && j==m-1)
        {
            if(arr[i][j-1]==1)
            {
              brr[aux[i][j]][aux[i][j-1]]=1;  
            }
            if(arr[i+1][j-1]==1)
            {
              brr[aux[i][j]][aux[i+1][j-1]]=1;  
            }
            if(arr[i+1][j]==1)
            {
              brr[aux[i][j]][aux[i+1][j]]=1;  
            }
        }
        else if(j==0 && i==n-1)
        {
           if(arr[i-1][j+1]==1)
           {
             brr[aux[i][j]][aux[i-1][j+1]]=1;  
           }
           if(arr[i-1][j]==1)
           {
             brr[aux[i][j]][aux[i-1][j]]=1;  
           }
           if(arr[i][j+1]==1)
           {
             brr[aux[i][j]][aux[i][j+1]]=1;  
           }
        }
        else if(j==m-1 && i==n-1)
        {
           if(arr[i-1][j-1]==1)
           {
             brr[aux[i][j]][aux[i-1][j-1]]=1;
           }
           if(arr[i-1][j]==1)
           {
             brr[aux[i][j]][aux[i-1][j]]=1;
           }
           if(arr[i][j-1]==1)
           {
             brr[aux[i][j]][aux[i][j-1]]=1;
           }
        }
        else if(i==0)
        {
           if(arr[i][j+1]==1)
           {
             brr[aux[i][j]][aux[i][j+1]]=1;  
           }
           if(arr[i][j-1]==1)
           {
             brr[aux[i][j]][aux[i][j-1]]=1;
           }
           if(arr[i+1][j-1]==1)
           {
             brr[aux[i][j]][aux[i+1][j-1]]=1;
           }
           if(arr[i+1][j+1]==1)
           {
             brr[aux[i][j]][aux[i+1][j+1]]=1;  
           }
           if(arr[i+1][j]==1)
           {
             brr[aux[i][j]][aux[i+1][j]]=1;
           }
           
        }
        else if(i==n-1)
        {
           if(arr[i][j+1]==1)
           {
             brr[aux[i][j]][aux[i][j+1]]=1;
           }
           if(arr[i][j-1]==1)
           {
             brr[aux[i][j]][aux[i][j-1]]=1;
           }
           if(arr[i-1][j+1]==1)
           {
             brr[aux[i][j]][aux[i-1][j+1]]=1;
           }
           if(arr[i-1][j-1]==1)
           {
             brr[aux[i][j]][aux[i-1][j-1]]=1;
           }
           if(arr[i-1][j]==1)
           {
             brr[aux[i][j]][aux[i-1][j]]=1;
           }
        }
        else if(j==0)
        {
           if(arr[i-1][j]==1)
           {
             brr[aux[i][j]][aux[i-1][j]]=1;
           }
           if(arr[i+1][j]==1)
           {
             brr[aux[i][j]][aux[i+1][j]]=1;
           }
           if(arr[i][j+1]==1)
           {
             brr[aux[i][j]][aux[i][j+1]]=1;
           }
           if(arr[i-1][j+1]==1)
           {
             brr[aux[i][j]][aux[i-1][j+1]]=1;
           }
           if(arr[i+1][j+1]==1)
           {
             brr[aux[i][j]][aux[i+1][j+1]]=1;
           }
        }
        else if(j==m-1)
        {
            if(arr[i-1][j]==1)
            {
              brr[aux[i][j]][aux[i-1][j]]=1;
            }
            if(arr[i+1][j]==1)
            {
              brr[aux[i][j]][aux[i+1][j]]=1;
            }
            if(arr[i-1][j-1]==1)
            {
              brr[aux[i][j]][aux[i-1][j-1]]=1;
            }
            if(arr[i][j-1]==1)
            {
             brr[aux[i][j]][aux[i][j-1]]=1;
            }
            if(arr[i+1][j-1]==1)
            {
             brr[aux[i][j]][aux[i+1][j-1]]=1;
            }
        }
        else
        {
          if(arr[i-1][j-1]==1)
          {
            brr[aux[i][j]][aux[i-1][j-1]]=1;
          }
          if(arr[i-1][j]==1)
          {
            brr[aux[i][j]][aux[i-1][j]]=1;
          }
          if(arr[i-1][j+1]==1)
          {
            brr[aux[i][j]][aux[i-1][j+1]]=1;
          }
          if(arr[i][j-1]==1)
          {
            brr[aux[i][j]][aux[i][j-1]]=1;
          }
          if(arr[i][j+1]==1)
          {
            brr[aux[i][j]][aux[i][j+1]]=1;
          }
          if(arr[i+1][j-1]==1)
          {
            brr[aux[i][j]][aux[i+1][j-1]]=1;
          }
          if(arr[i+1][j]==1)
          {
            brr[aux[i][j]][aux[i+1][j]]=1;
          }
          if(arr[i+1][j+1]==1)
          {
            brr[aux[i][j]][aux[i+1][j+1]]=1;
          }         
        }
      }
    }
    }
    colsize=n*m;
    maxvisit=0;
    for(int i=0;i<n*m;i++)
    {
      maxvisit=0;  
      if(status[i]==initial)
        dfs(i);
      if(answer<maxvisit)
      {
        answer=maxvisit;
      }
    }
    System.out.println(answer);
  }
  public static void dfs(int i)
  {
    if(status[i]==initial)
    {
      status[i]=visited;
      maxvisit++;
    }
    for(int j=0;j<colsize;j++)
    {
      if(status[j]==initial && brr[i][j]==1)
      {
        dfs(j);
      }
    }
    status[i]=finished;    
  }
}

