/*-----------------------------------------------------------------------

Problem Title: Birthday Cake Candles
Problem Link: https://www.hackerrank.com/challenges/birthday-cake-candles
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    int ma = -1;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] > ma) {
            ma = vec[i];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (vec[i] == ma) {
            count += 1;
        }
    }

    cout << count << endl;
}