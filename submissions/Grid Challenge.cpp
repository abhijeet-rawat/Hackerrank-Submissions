/*-----------------------------------------------------------------------

Problem Title: Grid Challenge
Problem Link: https://www.hackerrank.com/challenges/grid-challenge
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        char arr[n][n + 1];
        for (int i = 0; i < n; i++) {
            scanf("%s", arr[i]);
            sort(arr[i], arr[i] + n);
        }
        int flag = 0;
        for (int j = 0; j < n; j++) {
            for (int i = 1; i < n; i++) {
                if (arr[i][j] < arr[i - 1][j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                flag = 2;
                break;
            }
        }
        if (flag == 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}