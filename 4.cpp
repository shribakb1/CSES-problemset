/**
 *    author:  shribakb
 *    created: 2025.07.12 14:28:45
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long> ar(n);

    for(long long i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long sum = 0;

    for (long long i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            sum += ar[i - 1] - ar[i];
            ar[i] = ar[i - 1];
        }
    }


    cout << sum;

    return 0;
}