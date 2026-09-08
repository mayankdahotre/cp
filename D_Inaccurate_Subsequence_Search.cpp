// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,m,k;
//     cin>>n>>m>>k;

//     vector<int> a(n), b(m);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<m; i++) cin>>b[i];

//     map<int,int> mp;
//     for(int i=0; i<m; i++){
//         mp[a[i]]++;
//         mp[b[i]]--;
//     }

//     debug(m);

//     int ans=0;
//     if((2*m-mp.size())/2>=k) ans++;

//     debug(mp.size());

//     for(int i=0; i<n-m; i++){
//         mp[a[i]]--;
//         mp[a[i+m]]++;

//         debug(mp.size());

//         if((2*m-mp.size())/2>=k) ans++;
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    map<int,int> mpa, mpb;
    for(int i=0; i<m; i++){
        mpb[b[i]]++;
    }

    int c=0;
    for(int i=0; i<m; i++){
        if(mpa[a[i]] < mpb[a[i]]) c++;
        mpa[a[i]]++;
    }

    int ans=0;
    if(c>=k) ans++;

    for(int i=0; i<n-m; i++){
        if(mpa[a[i]]<=mpb[a[i]] && mpb[a[i]]){
            c--;
        }
        mpa[a[i]]--;

        if(mpa[a[i+m]]<mpb[a[i+m]] && mpb[a[i+m]]){
            c++;
        }
        mpa[a[i+m]]++;

        if(c>=k) ans++;
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