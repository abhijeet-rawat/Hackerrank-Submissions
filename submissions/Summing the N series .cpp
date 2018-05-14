/*-----------------------------------------------------------------------

Problem Title: Summing the N series 
Problem Link: https://www.hackerrank.com/challenges/summing-the-n-series
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << ((n % MOD) * (n % MOD)) % MOD << endl;
    }
    return 0;
}