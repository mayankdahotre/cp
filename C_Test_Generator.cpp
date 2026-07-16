// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int s, m;
//     cin>>s>>m;

//     if(s%2 && m%2==0){
//         cout<<-1<<endl;
//         return;
//     }

//     int ans=0;
//     while(s){
//         int x = 31 - __builtin_clz(m);
//         int y = (1<<x);

//         ans+=s/y;
//         s=s%y;

//         m-=y;
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



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int s, m;
    cin >> s >> m;

    if (s % 2 && m % 2 == 0) {
        cout << -1 << endl;
        return;
    }

    map<int,int> mp;
    vector<int> v;

    int ans = 0;
    while (s && m > 0) {
        int x = 63 - __builtin_clzll(m);
        int y = (1LL << x);      
        
        mp[x] = (s/y);
        v.push_back(s/y);
        s = s % y;

        m -= y;
    }

    debugv(v);

    if (s > 0) cout << -1 << endl;
    else cout << *min_element(v.begin(), v.end()) << endl;
    
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