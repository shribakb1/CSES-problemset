/**
 *    author:  shribakb
 *    created: 2025.07.12 14:18:06
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    cout << n << " ";
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }

        cout << n << " ";
    }
   
    return 0;
}