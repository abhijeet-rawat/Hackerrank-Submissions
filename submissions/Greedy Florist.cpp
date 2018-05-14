/*-----------------------------------------------------------------------

Problem Title: Greedy Florist
Problem Link: https://www.hackerrank.com/challenges/greedy-florist
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
bool myfunc(ll x, ll y)
{
    return x > y;
}
int main()
{
    ll n, k, temp, totalcost = 0;
    cin >> n >> k;
    vector<ll> vec, vec1;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end(), myfunc);
    vector<ll>::iterator itr = vec.begin();

    ll x = n / k, y = n % k, z = 0, count = 0;
    while (z < x) {
        for (int i = 0; i < k; i++) {
            totalcost += (count + 1) * (*itr);
            itr++;
        }
        count++;
        z++;
    }
    for (int i = 0; i < y; i++) {
        totalcost += (count + 1) * (*itr);
        itr++;
    }
    cout << totalcost << endl;
}