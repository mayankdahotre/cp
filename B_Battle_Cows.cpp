// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int f(vector<int> v, int x, int i, int k){
//     int ans=0;
//     int n = v.size();
//     vector<int> premx(n-1,0);
//     swap(v[i], v[k-1]);
//     for(int i=0; i<n-1; i++) premx[i]=max(v[i], v[i+1]);
//     for(int i=0; i<n; i++) if(premx[i]==x) ans++;
//     swap(v[i], v[k-1]);
//     return ans;
// }

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int x = v[k-1];

//     vector<int> premx(n-1,0);
//     for(int i=0; i<n-1; i++) premx[i]=max(v[i], v[i+1]);

//     int fmx=-1;
//     for(int i=0; i<k-1; i++){
//         if(v[i]>v[k-1]){
//             fmx=i;
//             break;
//         }
//     }

//     if(fmx==-1){
//         for(int i=0; i<n; i++){
//             if(v[i]>v[k-1]){
//                 cout<<i<<endl;
//                 return;
//             }
//         }

//         cout<<n-1<<endl;
//         return;
//     }
//     else{
//         int l=-1;
//         for(int i=fmx+1; i<k; i++){
//             if(v[i]>v[k-1]){
//                 l=i;
//                 break;
//             }
//         }

//         cout<<max(fmx-1, l-fmx+1)<<endl;
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

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int fmx = -1;
    for(int i=0; i<k-1; i++) {
        if(v[i] > v[k-1]) {
            fmx = i;
            break;
        }
    }

    int a1 = 0;
    swap(v[k-1], v[0]);
    int mx1 = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > mx1) mx1 = v[i];
        if(mx1 == v[0]) a1++;
    }
    swap(v[k-1], v[0]);

    int a2 = 0;
    if(fmx != -1) {
        swap(v[k-1], v[fmx]);
        int mx2 = v[0];
        for(int i = 1; i < n; i++) {
            if(v[i] > mx2) mx2 = v[i];
            if(mx2 == v[fmx]) a2++;
        }
        swap(v[k-1], v[fmx]);
    }

    cout << max(a1, a2) << endl;
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