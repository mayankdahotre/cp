// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> a(n, vector<int>(m));
//     vector<vector<int>> b(n, vector<int>(m));

//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>a[i][j];
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>b[i][j];

//     int d=0;
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) d+=(a[i][j]-b[i][j]);

//     vector<int> rd(n), cd(m);
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) rd[i]+=(a[i][j]-b[i][j]);
//     for(int j=0; j<m; j++) for(int i=0; i<n; i++) cd[j]+=(a[i][j]-b[i][j]);

//     bool ok = true;
//     for(int i=0; i<n; i++) if(rd[i]%3) { ok=false; break; }
//     for(int j=0; j<m; j++) if(cd[j]%3) { ok=false; break; }

//     if(ok) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n), b(n);

    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];

    vector<int> row(n,0), col(m,0);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int d=(b[i][j]-a[i][j]+3)%3;
            row[i]+=d;
            col[j]+=d;
        }
    }

    for (int i=0; i<n; i++){
        if (row[i]%3!=0) {
            cout<<"NO"<<endl;
            return;
        }
    }

    for (int j=0; j<m; j++) {
        if (col[j]%3!=0) {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}