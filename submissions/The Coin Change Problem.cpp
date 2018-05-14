/*-----------------------------------------------------------------------

Problem Title: The Coin Change Problem
Problem Link: https://www.hackerrank.com/challenges/coin-change
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, m, temp;
    cin >> n >> m;
    ll dp[m][n + 1];
    vector<ll> vec;
    for (ll i = 0; i < m; i++) {
        cin >> temp;
        dp[i][0] = 1;
        vec.push_back(temp);
    }
    for (ll i = 0; i < m; i++) {
        for (ll j = 1; j < n + 1; j++) {
            if (vec[i] > j) {
                if (i != 0) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = 0;
                }
            }
            else {
                if (i != 0) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - vec[i]];
                }
                else {
                    dp[i][j] = dp[i][j - vec[i]];
                }
            }
        }
    }
    cout << dp[m - 1][n] << endl;
}