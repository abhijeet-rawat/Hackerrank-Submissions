'''-----------------------------------------------------------------------

Problem Title: Lists
Problem Link: https://www.hackerrank.com/challenges/python-lists
Author: abhijeet_rawat
Language : Python 3

-----------------------------------------------------------------------'''


n= int(input())
string=""

lst2=[]

for i in range(0,n,1):
    string= input()
    lst=string.split(' ')
    if(lst[0]=='insert'):
        lst2.insert(int(lst[1]),int(lst[2]))
    elif(lst[0]=='print'):
        print(lst2)
    elif(lst[0]=='remove'):
        lst2.remove(int(lst[1]))
    elif(lst[0]=='append'):
        lst2.append(int(lst[1]))
    elif(lst[0]=='sort'):
        lst2.sort()
    elif(lst[0]=='pop'):
        lst2.pop()
    elif(lst[0]=='reverse'):
        lst2.reverse()

        
        
        
