// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     vector<int> pa(n), pb(n);
//     for(int i=0; i<n; i++){
//         if(s[i]=='a') pa[i]++;
//         else pb[i]++;

//         if(i>0) pa[i]+=pa[i-1];
//         if(i>0) pb[i]+=pb[i-1];
//     }

//     int ans = INT_MAX;

//     int a1=0, b1=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='b') b1+=pa[i];
//         else a1+=pb[i];
//     }

//     ans=min(a1,b1);

//     vector<int> sa(n), sb(n);
//     for(int i=n-1; i>=0; i--){
//         if(s[i]=='a') sa[i]++;
//         else sb[i]++;

//         if(i<n-1) sa[i]+=sa[i+1];
//         if(i<n-1) sb[i]+=sb[i+1];
//     }

//     for(int i=0; i<n; i++){
//         int aba=0, int bab=0;

//         for(int j=0; j<=i; j++){
//             if(s[i]=='b') aba+=pa[i];
//             else bab+=pb[i];
//         }

//         for(int j=n-1; j>i; j--){
//             if(s[i]=='a') bab+=sb[i];
//             else aba+=sa[i];
//         }

//         ans=min(ans, min(aba, bab));
//     }

//     cout<<ans<<endl;
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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     vector<int> pa(n, 0), pb(n, 0);
//     for(int i = 0; i < n; i++){
//         if(s[i] == 'a') pa[i]++;
//         else pb[i]++;

//         if(i > 0) pa[i] += pa[i-1];
//         if(i > 0) pb[i] += pb[i-1];
//     }

//     int ans = INT_MAX;

//     int a1 = 0, b1 = 0;
//     for(int i = 0; i < n; i++){
//         if(s[i] == 'b') b1 += pa[i];
//         else a1 += pb[i];
//     }

//     ans = min(a1, b1);

//     vector<int> sa(n, 0), sb(n, 0);
//     for(int i = n - 1; i >= 0; i--){
//         if(s[i] == 'a') sa[i]++;
//         else sb[i]++;

//         if(i < n - 1) sa[i] += sa[i+1];
//         if(i < n - 1) sb[i] += sb[i+1];
//     }

//     for(int i = 0; i < n; i++){
//         int aba = 0, bab = 0; 

//         for(int j = 0; j <= i; j++){
//             if(s[j] == 'b') aba += pa[j];
//             else bab += pb[j];
//         }

//         for(int j = n - 1; j > i; j--){
//             if(s[j] == 'a') bab += sb[j];
//             else aba += sa[j];
//         }

//         ans = min(ans, min(aba, bab));
//     }

//     cout << ans << endl;
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

    vector<int> pa(n, 0), pb(n, 0);
    for(int i = 0; i < n; i++){
        if(s[i] == 'a') pa[i]++;
        else pb[i]++;
        if(i > 0) {
            pa[i] += pa[i-1];
            pb[i] += pb[i-1];
        }
    }

    vector<int> pab(n, 0), pba(n, 0);
    for(int i = 0; i < n; i++){
        if(i > 0) {
            pab[i] = pab[i-1];
            pba[i] = pba[i-1];
        }
        if(s[i] == 'b') pab[i] += pa[i];
        else pba[i] += pb[i];
    }

    vector<int> sa(n, 0), sb(n, 0);
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'a') sa[i]++;
        else sb[i]++;
        if(i < n - 1) {
            sa[i] += sa[i+1];
            sb[i] += sb[i+1];
        }
    }

    vector<int> sab(n, 0), sba(n, 0);
    for(int i = n - 1; i >= 0; i--){
        if(i < n - 1) {
            sab[i] = sab[i+1];
            sba[i] = sba[i+1];
        }
        if(s[i] == 'a') sab[i] += sb[i];
        else sba[i] += sa[i];
    }

    int ans = LLONG_MAX;
    for(int i = 0; i < n; i++){
        int l_aba = pab[i];
        int l_bab = pba[i];
        int r_aba = (i < n - 1) ? sba[i+1] : 0;
        int r_bab = (i < n - 1) ? sab[i+1] : 0;

        ans = min(ans, min(l_aba + r_aba, l_bab + r_bab));
    }

    cout << ans << endl;
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