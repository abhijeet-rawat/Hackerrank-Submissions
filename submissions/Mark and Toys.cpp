/*-----------------------------------------------------------------------

Problem Title: Mark and Toys
Problem Link: https://www.hackerrank.com/challenges/mark-and-toys
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<int> prices;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());
    long answer = 0;
    for (vector<int>::iterator itr = prices.begin(); itr != prices.end(); itr++) {
        if (k >= (*itr)) {
            answer++;
            k -= (*(itr));
        }
        else {
            break;
        }
    }
    cout << answer << endl;

    return 0;
}