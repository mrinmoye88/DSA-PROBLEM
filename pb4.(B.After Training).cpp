#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> order;
    order.reserve(m);
    vector<pair<double, int>> baskets;
    double mid = (m + 1) / 2.0;

    for (int i = 1; i <= m; i++) {
        baskets.push_back({abs(mid - i), i});
    }

    sort(baskets.begin(), baskets.end(), [](auto &a, auto &b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    for (auto &p : baskets) {
        order.push_back(p.second);
    }

    for (int i = 0; i < n; i++) {
        cout << order[i % m] << "\n";
    }

    return 0;
}
