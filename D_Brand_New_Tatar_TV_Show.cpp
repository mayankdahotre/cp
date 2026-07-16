// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     vector<int> v2 = v;
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());

//     vector<pair<int,int>> g;
//     for(int i=0; i<v2.size(); i++) g.push_back({v2[i], mp[v2[i]]});

//     for(int i=v2.size()-1; i>=0; i--){
//         int a = i;
//         int x=0;

//         int j=i;
//         while(j--) if(v2[j]-v2[j-1]>k) break;
        
//         for(int l=j; l=i; l++){
//             x+=g[l].second;
//             if(x)
//         }

//         if()
//     }

//     cout<<"NO"<<endl;
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
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << " "; cout << endl;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int len = 1;

    for(int i = 1; i < n; i++) {
        if(a[i] - a[i - 1] <= k) {
            len++;
        }
        else {
            if(len & 1) {
                cout << "YES\n";
                return;
            }
            len = 1;
        }
    }

    if(!(len & 1)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}