// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> d(n);
//     for(int i=0; i<n; i++) cin>>d[i];

//     vector<int> l(n),r(n);
//     for(int i=0; i<n; i++){
//         cin>>l[i]>>r[i];
//     }

//     int h=0;
//     for(int i=0; i<n; i++){
//         if(d[i]==1){
//             h++;
//             if(l[i]<=h && h<=r[i]) continue;
//             else{
//                 cout<<-1<<endl;
//                 return;
//             }
//         }
//         else if(d[i]==0){
//             if(l[i]<=h && h<=r[i]) continue;
//             else{
//                 cout<<-1<<endl;
//                 return;
//             }
//         }
//         else if(d[i]==-1){
//             if(l[i]<=h && h<=r[i]){
//                 d[i]=0;
//                 continue;
//             }
//             else{
//                 h++;
//                 d[i]=1;
//                 if(l[i]<=h && h<=r[i]) continue;
//                 else{
//                     cout<<-1<<endl;
//                     return;
//                 }
//             }
//         }
//     }

//     for(int i=0; i<n; i++) cout<<d[i]<<" ";
//     cout<<endl;
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

// void gen(vector<int> &d, vector<vector<int>> &D) {
//     int n = d.size();
//     vector<int> ind;

//     for (int i = 0; i < n; ++i) {
//         if (d[i] == -1) {
//             ind.push_back(i);
//         }
//     }

//     if (ind.empty()) return;

//     int k = ind.size();
//     int t = 1LL << k;

//     for (int m = 0; m < t; ++m) {
//         vector<int> curr = d;
//         for (int b = 0; b < k; ++b) {
//             curr[ind[b]] = (m >> b) & 1;
//         }
//         D.push_back(curr);
//     }
// }

// bool check(vector<int> d2, int &n, vector<int> &l, vector<int> &r) {
//     int h = 0;

//     for (int i = 0; i < n; i++) {
//         if (d2[i] == 1) {
//             h++;
//             if (l[i] <= h && h <= r[i]) continue;
//             else return {};
//         } else if (d2[i] == 0) {
//             if (l[i] <= h && h <= r[i]) continue;
//             else return {};
//         } else if (d2[i] == -1) {
//             if (l[i] <= h && h <= r[i]) {
//                 d2[i] = 0;
//                 continue;
//             } else {
//                 h++;
//                 d2[i] = 1;
//                 if (l[i] <= h && h <= r[i]) continue;
//                 else return false;
//             }
//         }
//     }
//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> d(n);
//     for (int i = 0; i < n; i++) cin >> d[i];

//     vector<int> l(n), r(n);
//     for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

//     vector<vector<int>> D;
//     gen(d, D);

//     vector<int> ans = {};
//     for(auto di: D){
//         if(check(di,n,l,r)){
//             ans = di;
//             break;
//         }
//     }

//     if(!ans.empty()){
//         for(int i=0; i<n; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
//     else{
//         cout<<-1<<endl;
//         return;
//     }
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
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> d(n+1);
        for(int i=1;i<=n;i++) cin >> d[i];

        vector<int> L(n+1), R(n+1), l(n+1), r(n+1);
        for(int i=1;i<=n;i++){
            cin >> l[i] >> r[i];
        }

        L[0] = R[0] = 0;
        bool ok = true;
        for(int i=1;i<=n;i++){
            int nl, nr;
            if(d[i]==0){
                nl = L[i-1];
                nr = R[i-1];
            } else if(d[i]==1){
                nl = L[i-1] + 1;
                nr = R[i-1] + 1;
            } else { // -1
                nl = L[i-1];
                nr = R[i-1] + 1;
            }
            // intersect with [l[i],r[i]]
            L[i] = max(nl, l[i]);
            R[i] = min(nr, r[i]);
            if(L[i] > R[i]){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout << "-1\n";
            continue;
        }
        vector<int> h(n+1);
        h[n] = L[n];
        for(int i=n;i>=1;i--){
            if(d[i] == 0){
                h[i-1] = h[i];
            } else if(d[i] == 1){
                h[i-1] = h[i] - 1;
            } else {
                // try 0
                if(h[i] >= L[i-1] && h[i] <= R[i-1]){
                    d[i] = 0;
                    h[i-1] = h[i];
                } else {
                    d[i] = 1;
                    h[i-1] = h[i] - 1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout << d[i] << (i<n ? ' ' : '\n');
        }
    }
    return 0;
}

