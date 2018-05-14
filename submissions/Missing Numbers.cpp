/*-----------------------------------------------------------------------

Problem Title: Missing Numbers
Problem Link: https://www.hackerrank.com/challenges/missing-numbers
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <map>
#include <iostream>
#include <utility>
#include <vector>
#include <stdlib.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, m, temp;
    cin >> n;
    map<ll, ll> mymap1;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        map<ll, ll>::iterator itr = mymap1.find(temp);
        if (itr == mymap1.end()) {
            mymap1.insert(make_pair(temp, 1));
        }
        else {
            ((*itr).second)++;
        }
    }
    cin >> m;
    map<ll, ll> mymap2;
    for (ll i = 0; i < m; i++) {
        cin >> temp;
        map<ll, ll>::iterator itr = mymap2.find(temp);
        if (itr == mymap2.end()) {
            mymap2.insert(make_pair(temp, 1));
        }
        else {
            ((*itr).second)++;
        }
    }
    vector<ll> vec;
    for (map<ll, ll>::iterator itr = mymap2.begin(); itr != mymap2.end(); itr++) {
        if (mymap1.find((*itr).first) == mymap1.end()) {
            vec.push_back((*itr).first);
        }
        else {
            if ((*(mymap1.find((*itr).first))).second != ((*itr).second)) {
                vec.push_back((*itr).first);
            }
        }
    }
    for (vector<ll>::iterator itr = vec.begin(); itr != vec.end(); itr++) {
        cout << (*itr) << " ";
    }
}