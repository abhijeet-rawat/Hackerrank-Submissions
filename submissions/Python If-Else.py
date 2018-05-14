'''-----------------------------------------------------------------------

Problem Title: Python If-Else
Problem Link: https://www.hackerrank.com/challenges/py-if-else
Author: abhijeet_rawat
Language : Python 3

-----------------------------------------------------------------------'''


n= int(input())
if((n%2)!=0):
    print("Weird")
elif(((n%2)==0)and(n>=2 and n<=5)):
    print("Not Weird")
elif(((n%2)==0)and(n>=6 and n<=20)):
    print("Weird")
elif((n%2==0)and(n>=20)):
    print("Not Weird")
    

