/*-----------------------------------------------------------------------

Problem Title: Sock Merchant
Problem Link: https://www.hackerrank.com/challenges/sock-merchant
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, temp, count;
    cin >> n;
    set<int> myset;
    count = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        set<int>::iterator itr = myset.find(temp);
        if (itr == myset.end()) {
            myset.insert(temp);
        }
        else {
            myset.erase(itr);
            count++;
        }
    }
    cout << count << endl;
}