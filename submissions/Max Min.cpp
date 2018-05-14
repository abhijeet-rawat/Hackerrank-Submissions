/*-----------------------------------------------------------------------

Problem Title: Max Min
Problem Link: https://www.hackerrank.com/challenges/angry-children
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long int ll;
int main()
{
    ll n, k, j;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int mindiff = MAX;
    for (ll i = 0; i < n; i++) {
        j = i + k - 1;
        if (j < n) {
            if ((arr[j] - arr[i]) < mindiff) {
                mindiff = arr[j] - arr[i];
            }
        }
    }
    cout << mindiff << endl;
}