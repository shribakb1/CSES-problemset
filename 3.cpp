/**
 *    author:  shribakb
 *    created: 2025.07.12 14:23:39
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    long long count = 1;
    long long max_ = 1;
    for (long unsigned i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            if (count > max_)
            {
                max_ = count;
            }
            count = 1;
        }
    }


    cout << max(count, max_);
    return 0;
}