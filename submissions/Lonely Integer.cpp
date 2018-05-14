/*-----------------------------------------------------------------------

Problem Title: Lonely Integer
Problem Link: https://www.hackerrank.com/challenges/lonely-integer
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        temp = temp ^ x;
    }
    cout << temp;
}