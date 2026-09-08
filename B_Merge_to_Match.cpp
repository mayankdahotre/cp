// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> a(n), b(m);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<m; i++) cin>>b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if(a[0]>b[0] || a[n-1]<b[m-1]){
//         no;
//         return;
//     }

//     set<int> sa(a.begin(), a.end());
//     int d=0, m2=0, n2=0;
//     for(int i=0; i<m; i++){
//         if(sa.find(b[i])==sa.end()) d++;
//         else{
//             n2--;
//             m2--;
//         }
//     }

//     if(n2-d<m2){
//         no;
//         return;
//     }

//     // stack<int> st;
//     int j=0;
//     int cnt=0;
//     int pot=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==b[j]){
//             cnt--;
//             j++;
//             continue;
//         }

//         if(a[i]<b[j]){
//             pot++;
//             cnt++;
//         }
//         else{
//             pot--;
//             cnt--;
//             j++;
//         }

//         if(j==m-1) break;
//     }

//     if(j==m) yes;
//     else no;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a[0]>b[0] || a[n-1]<b[m-1]){
        no;
        return;
    }

    set<int> sa(a.begin(), a.end());
    int d=0, m2=m, n2=n;
    for(int i=0; i<m; i++){
        if(sa.find(b[i])==sa.end()) d++;
        else{
            n2--;
            m2--;
        }
    }

    if(n2-d<m2){
        no;
        return;
    }

    int ca=0, cb=0, lc=-1, j=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[j]){
            j++;
        }

        if(a[i]<b[j]){
            if(a[i]>b[lc] && cb){
                ca--;
                lc++;
                cb--;
            }
            else{
                ca++;
                j++;
            }
        }
        else{
            if(a[i]>b[lc] && cb){
                ca--;
                lc++;
                cb--;
            }
            else j++;
        }
        
        if(lc==m-1) break;
    }

    if(lc==m-1) yes;
    else no;
    return;
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


















// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n), b(m);
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < m; i++) cin >> b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if (n < 2 * m || a[0] > b[0] || a[n - 1] < b[m - 1]) {
//         no;
//         return;
//     }

//     int j = 0;
//     for(int i = 0; i < n && j < m; i++) {
//         if(a[i] < b[j]) {
//             if (i >= j) {
//                 if (a[n - m + j] > b[j]) {
//                     j++;
//                 }
//             }
//         }
//     }

//     if(j == m) yes;
//     else no;
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