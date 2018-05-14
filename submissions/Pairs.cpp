/*-----------------------------------------------------------------------

Problem Title: Pairs
Problem Link: https://www.hackerrank.com/challenges/pairs
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
    set<ll> myset;
    ll n, k, i, temp, count;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        myset.insert(temp);
    }
    count = 0;
    for (set<ll>::iterator itr = myset.begin(); itr != myset.end(); itr++) {
        if (myset.find(k + (*itr)) != myset.end()) {
            count++;
        }
    }
    cout << count << endl;
}