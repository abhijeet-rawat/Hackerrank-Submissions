/*-----------------------------------------------------------------------

Problem Title: Find the Point
Problem Link: https://www.hackerrank.com/challenges/find-point
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
    int t, px, py, qx, qy, rx, ry;
    cin >> t;
    while (t--) {
        cin >> px >> py >> qx >> qy;
        rx = 2 * qx - px;
        ry = 2 * qy - py;
        cout << rx << " " << ry << endl;
    }

    return 0;
}