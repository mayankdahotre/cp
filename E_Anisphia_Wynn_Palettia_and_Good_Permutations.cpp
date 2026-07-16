#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p;

        // First even numbers
        for (int i = 2; i <= n; i += 2)
            p.push_back(i);

        // Then odd numbers
        for (int i = 1; i <= n; i += 2)
            p.push_back(i);

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
}
