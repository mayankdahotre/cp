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

//     int mx = *max_element(v.begin(), v.end());
//     int mxc = 0;
//     for(int i=0; i<n; i++) if(v[i]==mx) mxc++;

//     int rem = n-mxc;
//     int mn = *min_element(v.begin(), v.end());
//     int d = mx-mn;

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     bool ev=true;
//     for(auto p: mp){
//         if(p.second%2){
//             ev=false;
//             break;
//         }
//     }

//     if((rem==2*d+1 && mxc%2) || (rem==2*d && mxc%2==0) || ev) cout<<"Yes"<<endl;
//     else cout<<"No"<<endl;

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

    vector<int> cnt(n+2, 0);

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        cnt[x]++;
    }

    bool ok=true;

    for(int x=1; x<=n; x++) {
        if(cnt[x]==1) {
            ok=false;
            break;
        }

        if(cnt[x]>=2) cnt[x+1]+=cnt[x]-2;
    }

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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