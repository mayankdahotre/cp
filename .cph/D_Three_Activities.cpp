// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n), c(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];
//     for (int i = 0; i < n; i++) cin >> c[i];

//     vector<pair<int,int>> A(n), B(n), C(n);
//     for (int i = 0; i < n; i++) {
//         A[i] = {a[i], i};
//         B[i] = {b[i], i};
//         C[i] = {c[i], i};
//     }
//     sort(A.begin(), A.end(), greater<>());
//     sort(B.begin(), B.end(), greater<>());
//     sort(C.begin(), C.end(), greater<>());

//     const int K = 4;
//     if (n > K) {
//         A.resize(K);
//         B.resize(K);
//         C.resize(K);
//     }

//     int ans = 0;
//     for (auto &pa : A) {
//         for (auto &pb : B) {
//             if (pa.second == pb.second) continue;
//             for (auto &pc : C) {
//                 if (pc.second == pa.second || pc.second == pb.second) continue;
//                 ans = max(ans, pa.first + pb.first + pc.first);
//             }
//         }
//     }

//     cout << ans << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n),b(n),c(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) cin>>c[i];

    vector<pair<int,int>> A(n),B(n),C(n);
    for(int i=0; i<n; i++){
        A[i] = {a[i],i};
        B[i] = {b[i],i};
        C[i] = {c[i],i};
    }

    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    sort(C.begin(),C.end(),greater<int>());

    int k=4;
    if(n>4){
        A.resize(k);
        B.resize(k);
        C.resize(k);
    }

    int ans = 0;
    for(auto &pa: A){
        for(auto &pb : B){
            if(pa.first!=pb.first){
                for(auto &pc : C){
                    if(pa.first!=pb.first && pb.first!=pc.first){
                        ans = max(pa.first+pb.first+pc.first,ans);
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
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