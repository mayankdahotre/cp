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

    vector<int> pref(n+1, 0);
    for(int i=1; i<=n; i++) pref[i]=pref[i-1]+v[i-1];

    int sum=pref[n];

    int l=n, r=n;
    for(int i=n-1; i>=0; i--){
        if(l+r<=v[i]){
            l--;
            r--;
            continue;
        }
        else{
            int prev = l+r;
            int cur = 0;
            while(l>0){
                cur = (r-l+1)*(l+r);
                if(cur>=pref[r]-pref[l-1] && cur>prev){
                    l--;
                }
            }
            l++;

            sum = max(sum, pref[l-1]+pref[n]-pref[r]+cur);
        }
    }

    cout<<sum<<endl;
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