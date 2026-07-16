#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int d(int x, int y, int x2, int y2){
    int ans = 0;
    ans+=(x2-x)*(x2-x);
    ans+=(y2-y)*(y2-y);

    return ans;
}

void solve() {
    int n;
    cin>>n;

    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;

    int r=d(a1,a2,b1,b2);

    bool b = true;
    for(int i=0; i<n; i++){
        int c1=v[i].first;
        int c2=v[i].second;

        if(d(c1,c2,b1,b2)<=r){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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

// int d(int x, int y, int x2, int y2){
//     int ans = 0;
//     ans += (x2 - x) * (x2 - x);
//     ans += (y2 - y) * (y2 - y);

//     return ans;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<pair<int,int>> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

//     int a1, a2, b1, b2;
//     cin >> a1 >> a2 >> b1 >> b2;

//     int r = d(a1, a2, b1, b2);

//     for(int i = 0; i < n; i++){
//         int c1 = v[i].first;
//         int c2 = v[i].second;

//         if(d(c1, c2, b1, b2) <= r){
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;
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