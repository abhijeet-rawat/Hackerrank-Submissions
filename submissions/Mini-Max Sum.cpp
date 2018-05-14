/*-----------------------------------------------------------------------

Problem Title: Mini-Max Sum
Problem Link: https://www.hackerrank.com/challenges/mini-max-sum
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
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
typedef long long int ll;

int main()
{
    ll temp;
    vector<ll> vec;
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    cout << vec[0] + vec[1] + vec[2] + vec[3] << " " << vec[1] + vec[2] + vec[3] + vec[4];
    return 0;
}