#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> arr) {
    int pivot = arr[0];
    vector<int> left, equal, right;

    for (int x : arr) {
        if (x < pivot) {
            left.push_back(x);
        } else if (x == pivot) {
            equal.push_back(x);
        } else {
            right.push_back(x);
        }
    }

    vector<int> result;
    for (int x : left) result.push_back(x);
    for (int x : equal) result.push_back(x);
    for (int x : right) result.push_back(x);

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans = quickSort(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
