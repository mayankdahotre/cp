// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     int mex=0;
//     map<int,int> mp;

//     for(int i=0; i<n; i++) mp[v[i]]++;

//     int mex=0;
//     while(mp[mex].count()) mex++;

//     if(k==mex){
//         cout<<0<<endl;
//         return;
//     }
//     else if(k<mex){
//         int ans=0;
//         while(mp[mex]>0){
//             if(k==mex-1) break;
//             else ans+=mp[mex];
//             mex--;
//         }
//         cout<<ans<<endl;
//         return;
//     }
//     else{
//         int ans=0;
//         for(int i=mex; i<k; i++){
//             if(!mp.count(i)) ans++;
//         }
//         cout<<ans<<endl;
//         return;
//     }
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
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    int mex=0;
    while(mp.count(mex)) mex++;

    if(k==mex){
        cout<<0<<endl;
        return;
    }
    else if(k<mex){
        cout<<mp[k]<<endl;
        return;
    }
    else{
        int ans=0;
        for(int i=mex; i<k; i++){
            if(!mp.count(i)) ans++;
        }
        if(mp.count(k)) ans=max(mp[k],ans);

        cout<<ans<<endl;
        return;
    }
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