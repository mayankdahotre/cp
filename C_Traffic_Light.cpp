#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    s = s + s;

    vector<int> next_g(2*n, -1);

    int last = -1;

    for(int i = 2*n - 1; i >= 0; i--) {
        if(s[i] == 'g') last = i;
        next_g[i] = last;
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == c) {
            ans = max(ans, next_g[i] - i);
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     char c;
//     cin >> n >> c;

//     string s;
//     cin >> s;

//     s = s + s;

//     int ans = 0;

//     auto it = s.begin();  

//     while (true) {
//         auto pos = find(it, s.end(), c);
//         if (pos == s.end()) break;  

//         int l = pos - s.begin();

//         auto pos2 = find(pos, s.end(), 'g');
//         int r = pos2 - s.begin();

//         ans = max(ans, r - l);

//         it = pos + 1;  
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }