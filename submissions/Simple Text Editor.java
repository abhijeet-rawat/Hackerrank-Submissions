/*-----------------------------------------------------------------------

Problem Title: Simple Text Editor
Problem Link: https://www.hackerrank.com/challenges/simple-text-editor
Author: abhijeet_rawat
Language : Java 8

-----------------------------------------------------------------------*/


import java.util.Scanner;
import java.util.Stack;
/**
 *
 * @author ABHIJEETPC
 */
public class TextEditor {
    
    static Stack<MyObject> li=new Stack();
    static String mainstring="";
    public static void main(String args[])
    {  
      Scanner kb=new Scanner(System.in);
      int q,i,k;
      String str="";
      q=kb.nextInt();
      while(q--!=0)
      {
        i=kb.nextInt();
        if(i==1)
        {
          str=kb.nextLine();
          str=str.substring(1,str.length());
          MyObject ob=new MyObject();
          ob.x=1;
          ob.k=str.length();
          ob.str=str;
          li.push(ob);
          mainstring+=str;
        }
        else if(i==2)
        {
          k=kb.nextInt();
          MyObject ob=new MyObject();
          ob.x=2;
          ob.k=k;
          ob.str=mainstring.substring(mainstring.length()-k,mainstring.length());
          li.push(ob);
          mainstring=mainstring.substring(0,mainstring.length()-k);
        }
        else if(i==3)
        {
          k=kb.nextInt();
          System.out.println(mainstring.charAt(k-1));
        }
        else 
        {
          MyObject obj=li.pop();
          if(obj.x==1)
          {
            undoappend(obj);
          }
          else
          {
            undodelete(obj);
          }
        }
      }
    }
    
   static void undoappend(MyObject o)
    {
      mainstring=mainstring.substring(0,mainstring.length()-o.k);
      
    }
    static void undodelete(MyObject o)
    {
      mainstring=mainstring+o.str;
    }
}
class MyObject
{
  int x,k;
  String str;
}

