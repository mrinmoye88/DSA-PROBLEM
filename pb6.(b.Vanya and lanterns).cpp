#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    double ans = max((double)a[0], (double)(l - a[n - 1]));

    for (int i = 1; i < n; i++) {
        ans = max(ans, (a[i] - a[i - 1]) / 2.0);
    }

    cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}
