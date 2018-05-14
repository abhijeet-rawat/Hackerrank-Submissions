/*-----------------------------------------------------------------------

Problem Title: Balanced Brackets
Problem Link: https://www.hackerrank.com/challenges/balanced-brackets
Author: abhijeet_rawat
Language : C++

-----------------------------------------------------------------------*/


#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
bool matcher(char ch1, char ch2)
{
    if (ch1 == '{' && ch2 == '}')
        return true;
    else if (ch1 == '(' && ch2 == ')')
        return true;
    else if (ch1 == '[' && ch2 == ']')
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    char str[1001];
    while (n--) {
        cin >> str;
        stack<char> stk;
        int i;
        for (i = 0; i < strlen(str); i++) {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                stk.push(str[i]);
            }
            else {
                if (stk.empty() == false) {
                    if (matcher(stk.top(), str[i])) {
                        stk.pop();
                    }
                    else {
                        break;
                    }
                }
                else {
                    break;
                }
            }
        }
        if (stk.empty()) {
            if (i == strlen(str)) {
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
}