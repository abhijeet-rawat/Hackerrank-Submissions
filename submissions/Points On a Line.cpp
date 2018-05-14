/*-----------------------------------------------------------------------

Problem Title: Points On a Line
Problem Link: https://www.hackerrank.com/challenges/points-on-a-line
Author: abhijeet_rawat
Language : C++14

-----------------------------------------------------------------------*/


#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first) {
        return true;
    }
    else if (p1.first > p2.first) {
        return false;
    }
    else {
        if (p1.second < p2.second) {
            return true;
        }
        else if (p1.second > p2.second) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main()
{
    int n, x, y;

    cin >> n;

    vector<pair<int, int> > vec;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    sort(vec.begin(), vec.end(), compare);

    pair<int, int> p1 = vec[0];
    pair<int, int> p2 = vec[1];
    int flag1 = 1, flag2 = 1;
    if (((p2.first - p1.first) == 0) || ((p2.second - p1.second) == 0)) {
        p1 = vec[1];
        for (int i = 2; i < vec.size(); i++) {
            p2 = vec[i];
            if ((p2.first - p1.first) != 0) {
                flag1 = 0;
                break;
            }
            p1 = vec[i];
        }
        p1 = vec[1];
        for (int i = 2; i < vec.size(); i++) {
            p2 = vec[i];
            if ((p2.second - p1.second) != 0) {
                flag2 = 0;
                break;
            }
            p1 = vec[i];
        }
        if (flag1 | flag2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
}