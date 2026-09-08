// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int a1=0, a2=0;
//     for(int i=0; i<n; i++){
//         if(i%2){
//             if(a1^a[i]<a2^b[i]){
//                 a1^=a[i];
//                 a2^=b[i];
//             }
//             else{
//                 a1^=b[i];
//                 a2^=a[i];
//             }
//         }
//         else{
//             if(a1^a[i]>a2^b[i]){
//                 a1^=a[i];
//                 a2^=b[i];
//             }
//             else{
//                 a1^=b[i];
//                 a2^=a[i];
//             }
//         }
//         // if(a1^a[i]>a2^b[i]){
//         //     a1^=a[i];
//         //     a2^=b[i];
//         // }
//         // else{
//         //     a1^=b[i];
//         //     a2^=a[i];
//         // }
//     }

//     if(a1>a2) cout<<"Ajisai"<<endl;
//     else if(a1<a2) cout<<"Mai"<<endl;
//     else cout<<"Tie"<<endl;

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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    int s = 0;
    for (int i = 0; i < n; i++) {
        s ^= a[i] ^ b[i];
    }
    
    if (s == 0) {
        cout << "Tie" << endl;
        return;
    }
    
    int k = 31 - __builtin_clz(s);
    int li = -1;
    
    for (int i = 0; i < n; i++) {
        if (((a[i] ^ b[i]) >> k) & 1) {
            li = i;
        }
    }
    
    if (li % 2 == 0) cout << "Ajisai" << endl;
    else cout << "Mai" << endl;
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