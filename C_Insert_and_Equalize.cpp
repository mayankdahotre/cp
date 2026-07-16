// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     int g = v[1]-v[0];
//     for(int i=0; i<n-1; i++) g=__gcd(g, v[i+1]-v[i]);

//     int ans=n*v[n-1];
//     for(int i=0; i<n-1; i++) ans-=v[i];
//     ans/=g;

//     int j=n-1;
//     int add=v[n-1];
//     while(v[j]!=add){
//         j--;
//         add-=g;
//     }

//     ans+=(v[n-1]-add)/g;

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
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(n==1){
        cout<<1<<endl;
        return;
    }

    sort(v.begin(), v.end());

    int g = 0;
    for(int i=0; i<n-1; i++) g = __gcd(g, v[i+1] - v[i]);

    int mx = v[n-1];

    int ans = 0;
    for(int i=0; i<n; i++) ans += (mx - v[i]) / g;

    set<int> s(v.begin(), v.end());

    int add = mx;
    int ex = 0;

    while(s.count(add)){
        add-=g;
        ex++;
    }

    ans+=ex;

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}