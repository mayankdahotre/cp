// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// string res(string s) {
//     int n = s.length();
    
//     for (int k = 0; k < n - 1; k++) {
//         int j = k;
//         int mxv = s[k] - '0'; 
        
//         for (int i = k + 1; i < n; i++) {
//             if (s[i] == '0') continue;
            
//             int pv = (s[i] - '0') - (i - k);
            
//             if (pv > mxv) {
//                 mxv = pv;
//                 j = i;
//             }
//         }
        
//         if (j != k) {
//             char pc = (char)('0' + mxv);
            
//             s.erase(j, 1);
            
//             s.insert(k, 1, pc);
//         }
//     }
    
//     return s;
// }

// void solve() {
//     string s;
//     cin>>s;

//     cout<<res(s)<<endl;
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

struct BIT {
    int n;
    vector<int> t;
    BIT(int n) : n(n), t(n + 1, 0) {}
    
    void upd(int i, int d) {
        for (; i <= n; i += i & -i) t[i] += d;
    }
    
    int qry(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i) s += t[i];
        return s;
    }
};

string res(string s) {
    int n = s.length();
    vector<queue<int>> p(10);
    for (int i = 0; i < n; i++) p[s[i] - '0'].push(i);
    
    BIT b(n);
    string ans = "";
    
    for (int k = 0; k < n; k++) {
        int bd = -1, mx = -1e18, bi = -1;
        
        for (int d = 0; d <= 9; d++) {
            if (p[d].empty()) continue;
            
            int oi = p[d].front();
            int cur = oi - b.qry(oi + 1);
            int pv = d - cur;
            
            if (pv > mx) {
                mx = pv;
                bd = d;
                bi = oi;
            }
        }
        
        ans += (char)('0' + mx);
        p[bd].pop();
        b.upd(bi + 1, 1);
    }
    return ans;
}

void solve() {
    string s;
    cin >> s;
    cout << res(s) << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}