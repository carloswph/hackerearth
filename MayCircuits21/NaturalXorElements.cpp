#include<iostream>
using namespace std;
/*
 * 100% accepted after trying in both PHP and Python.
 * It seems that C++ gets an obvious advantage in terms of speed.
 * Unfairly, PHP compiler still uses an outdated version - they should be offering PHP 8 at this point.
 */
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if(n % 4 == 0) {
            cout << 1 << ' ' << n << endl;
        } 
        else if (n % 4 == 1) {
            cout << 1 << ' ' << 1 << endl;
        }
        else if (n % 4 == 2) {
            cout << 2 << ' ' << n << ' ' << 1 << endl;
        }
        else if (n % 4 == 3) {
            cout << 0 << endl;
        }
    }

    return 0;
}