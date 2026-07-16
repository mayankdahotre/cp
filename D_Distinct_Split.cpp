// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int noc(string s){
//     int n = 0;
//     map<char,bool> vis;
//     for(auto c: s){
//         if(!vis[c]){
//             vis[c]=true;
//             n++;
//         }
//     }

//     return n;
// }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     int maxn = 0;

//     for(int i=0; i<n; i++){
//         int num = noc(s.substr(0,i)) + noc(s.substr(i,n));
//         maxn = max(maxn, num);
//     }

//     cout<<maxn<<endl;
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
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> prefix(n + 1, 0), suffix(n + 1, 0);
    unordered_set<char> seen;
    
    for (int i = 0; i < n; i++) {
        seen.insert(s[i]);
        prefix[i + 1] = seen.size();
    }
    
    seen.clear();
    
    for (int i = n - 1; i >= 0; i--) {
        seen.insert(s[i]);
        suffix[i] = seen.size();
    }
    
    int maxn = 0;
    for (int i = 0; i < n; i++) {
        maxn = max(maxn, prefix[i] + suffix[i]);
    }
    
    cout << maxn << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
