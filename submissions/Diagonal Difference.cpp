/*-----------------------------------------------------------------------

Problem Title: Diagonal Difference
Problem Link: https://www.hackerrank.com/challenges/diagonal-difference
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp1, temp2 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp1;
            if (i == j) {
                count1 += temp1;
            }
            if (j == (n - 1 - temp2)) {
                count2 += temp1;
            }
        }
        temp2 += 1;
    }

    cout << abs(count1 - count2) << endl;
}