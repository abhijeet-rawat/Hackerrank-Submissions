/*-----------------------------------------------------------------------

Problem Title: Sherlock and Cost
Problem Link: https://www.hackerrank.com/challenges/sherlock-and-cost
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t, n, temp;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> vec;
        int dp[2][n];
        for (int i = 0; i < n; i++) {
            cin >> temp;
            vec.push_back(temp);
        }
        dp[0][0] = 0;
        dp[1][0] = 0;

        for (int j = 1; j < n; j++) {
            for (int i = 0; i < 2; i++) {
                if (i == 0) {
                    dp[i][j] = max(dp[i][j - 1] + abs(vec[j - 1] - vec[j]), dp[i + 1][j - 1] + abs(vec[j] - 1));
                }
                else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1] + abs(vec[j - 1] - 1));
                }
            }
        }
        cout << max(dp[0][n - 1], dp[1][n - 1]) << endl;
    }
}