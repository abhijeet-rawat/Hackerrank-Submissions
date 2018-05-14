/*-----------------------------------------------------------------------

Problem Title: Stepping Stones Game
Problem Link: https://www.hackerrank.com/challenges/stepping-stones-game
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n, n1, n2;
    cin >> t;
    while (t--) {
        cin >> n;
        n1 = ((-1) + pow((1 + 8 * n), 0.5)) / 2;
        if ((n1 * (n1 + 1)) / 2 == n) {
            cout << "Go On Bob " << n1 << endl;
        }
        else {
            cout << "Better Luck Next Time" << endl;
        }
    }
    return 0;
}