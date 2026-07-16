// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string a, b;
//     cin >> a >> b;

//     reverse(a.begin(), a.end());
//     reverse(b.begin(), b.end());

//     int n = a.length();
//     int m = b.length();

//     int curr = -1;

//     vector<int> pos(26, 0);
//     for(int i = 0; i < m; i++){
//         int occ = -1;

//         occ = a.find(b[i], pos[b[i] - 'a']);

//         if(occ == -1 || occ < curr){
//             cout << "NO" << endl;
//             return;
//         }

//         pos[b[i] - 'a'] = occ + 1;

//         curr = max(curr, occ);
//     }

//     cout << "YES" << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
// }







#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    // count needed occurrences of each letter in b
    vector<int> need(26, 0);
    for(char c : b) need[c - 'A']++;

    // check a has enough of each letter
    vector<int> have(26, 0);
    for(char c : a) have[c - 'A']++;
    for(int i = 0; i < 26; i++){
        if(have[i] < need[i]){
            cout << "NO" << endl;
            return;
        }
    }

    // mark the last need[c] occurrences of each letter in a as allowed
    vector<bool> allowed(n, false);
    vector<int> cnt(26, 0);
    for(int i = n - 1; i >= 0; i--){
        int c = a[i] - 'A';
        if(cnt[c] < need[c]){
            allowed[i] = true;
            cnt[c]++;
        }
    }

    // check if b is a subsequence of a using only allowed positions
    int j = 0;
    for(int i = 0; i < n && j < m; i++){
        if(allowed[i] && a[i] == b[j]) j++;
    }

    if(j == m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
}