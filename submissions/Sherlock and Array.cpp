/*-----------------------------------------------------------------------

Problem Title: Sherlock and Array
Problem Link: https://www.hackerrank.com/challenges/sherlock-and-array
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stdlib.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    ll n, *arr, *brr, sum = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        arr = (ll*)malloc(sizeof(ll) * n);
        brr = (ll*)malloc(sizeof(ll) * n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            brr[i] = sum;
            sum += arr[i];
        }
        int flag = 0;
        for (ll i = 0; i < n; i++) {
            if (brr[i] == (brr[n - 1] + arr[n - 1] - brr[i] - arr[i])) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}