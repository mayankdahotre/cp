// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m,h;
//     cin>>n>>m>>h;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> b(m), c(m);
//     for(int i=0; i<m; i++) cin>>b[i]>>c[i];

//     // vector<int> v2=v;

//     // int idx=-1;
//     // vector<int> d(n,0);
//     // for(int i=0; i<m; i++){
//     //     d[b[i]-1]+=c[i];
//     //     if(v2[b[i]-1]>h){
//     //         d[b[i]-1]=0;
//     //         idx = i;

//     //     }
//     // }

//     vector<int> v2 = v;

//     for(int i = 0; i < m; i++) {
//         int idx = b[i] - 1;

//         if(v2[idx] + c[i] > h) v2 = v;
//         else v2[idx] += c[i];
//     }

//     for(int i=0; i<n; i++) cout<<v2[i]<<" ";
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

// void solve() {
//     int n, m, h;
//     cin>>n>>m>>h;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> b(m), c(m);
//     for(int i=0; i<m; i++) cin>>b[i]>>c[i];

//     int lr=-1;
//     vector<int> lm(n,-1);
//     vector<int> v2 = v;

//     for(int i=0; i<m; i++){
//         int idx = b[i]-1;

//         if(lm[idx]<=lr) v2[idx]=v[idx];

//         if(v2[idx]+c[i]>h) lr=i+1;
//         else{
//             v2[idx]+=c[i];
//             lm[idx]=i+1;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(lm[i]<=lr) v2[i]=v[i];
//     }

//     for(int i=0; i<n; i++) cout<<v2[i]<<" ";
//     cout<<endl;
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


// resolve

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,h;
    cin>>n>>m>>h;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> b(m), c(m);
    for(int i=0; i<m; i++) cin>>b[i]>>c[i];

    int lr=-1;
    vector<int> v2 = v;
    vector<int> lm(n, -1);

    for(int i=0; i<m; i++){
        int idx = b[i]-1;

        if(lm[idx] <= lr){
            v2[idx] = v[idx];
        }

        if(v2[idx] + c[i] > h){
            lr = i+1;
        }
        else{
            v2[idx]+=c[i];
            lm[idx]=i+1;
        }
    }

    for(int i=0; i<n; i++){
        if(lm[i] <= lr) lm[i] = v[i];
    }

    for(int i=0; i<n; i++) cout<<lm[i]<<" ";
    cout<<endl;

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