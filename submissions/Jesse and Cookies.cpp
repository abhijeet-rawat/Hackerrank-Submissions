/*-----------------------------------------------------------------------

Problem Title: Jesse and Cookies
Problem Link: https://www.hackerrank.com/challenges/jesse-and-cookies
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, k, i, temp, temp1, temp2, flag, count;
    multiset<ll> myset;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> temp;
        myset.insert(temp);
    }
    flag = 0;
    count = 0;
    while ((myset.empty() != true) && (*(myset.begin()) < k)) {
        temp = *(myset.begin());
        myset.erase(myset.begin());
        if (myset.empty() != true) {
            temp1 = *(myset.begin());
            myset.erase(myset.begin());
            temp2 = temp + temp1 * 2;
            myset.insert(temp2);
            count++;
        }
        else {
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << count << endl;
    }
    else {
        cout << "-1" << endl;
    }
    return 0;
}