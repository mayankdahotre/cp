// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;
    
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int c = 0;
//     for (int i = 0; i < n - 1; i++) {
//         if (v[i] <= v[i + 1]) c++;
//     }

//     cout << c << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<int> towers;
    
    for (int i = 0; i < n; i++) {
        int cube;
        cin >> cube;
        
        auto it = upper_bound(towers.begin(), towers.end(), cube);
        
        if (it == towers.end()) {
            towers.push_back(cube);
        } else {
            *it = cube;
        }
    }

    cout << towers.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}

