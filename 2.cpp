/**
 *    author:  shribakb
 *    created: 2025.07.12 14:21:14
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long long sum = 0;

    long long x;
    while (cin >> x)
    {
        sum +=x;
    }

    cout << n * (n + 1) / 2 - sum;
    return 0;
}