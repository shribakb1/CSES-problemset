/**
 *    author:  shribakb
 *    created: 2025.07.12 14:39:27
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;


    if (n == 3 || n == 2)
        cout << "NO SOLUTION";
    else
    {
        for (long long i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (long long i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}