#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<long long> a(n), b(m);

    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int ans = 0;

    while (i < n && j < m) {
        if (b[j] < a[i] - k) {
            j++;  // apartment too small
        }
        else if (b[j] > a[i] + k) {
            i++;  // apartment too big
        }
        else {
            ans++; // match
            i++;
            j++;
        }
    }

    cout << ans << endl;
}
