/*-----------------------------------------------------------------------

Problem Title: Intro to Tutorial Challenges
Problem Link: https://www.hackerrank.com/challenges/tutorial-intro
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<int, int> mymap;
    int t, n, temp;
    cin >> t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mymap.insert(make_pair(temp, i));
    }
    cout << mymap[t];
    return 0;
}