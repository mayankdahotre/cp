// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int c0=0, c1=1;
//     for(int i=0; i<n; i++) if(v[i]) c1++;

//     if(c1>n-c1){
//         cout<<"YES"<<endl;
//         return;
//     }

//     int n0=0;
//     for(int i=0; i<n-1; i++){
//         if(v[i]!=v[i+1]){
//             if(v[i+1]==1) n0++;
//         }
//     }
//     if(v[n-1]==0) n0++;

//     if(n0>=c1){
//         cout<<"NO"<<endl;
//         return;
//     }

//     cout<<"YES"<<endl;
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

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c1 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') c1++;
    }

    if(c1 > n - c1) {
        cout << "Yes" << endl;
        return;
    }

    int n0 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0' && (i == 0 || s[i - 1] == '1')) {
            n0++;
        }
    }

    if(n0 >= c1) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}