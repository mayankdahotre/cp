// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// bool cmp(pair<int,int> a, pair<int,int> b){
//     if(a.first==b.first) return a.second<b.second;
//     return a.first<b.first;
// }

// bool cmp2(pair<int,int> a, pair<int,int> b){
//     return a.second<b.second;
// }

// void solve() {
//     int n,m,k;
//     cin>>n>>m>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<pair<int,int>> vp;
//     for(int i=0; i<n; i++) vp.push_back({v[i],i});

//     sort(vp.begin(), vp.end(), cmp);

//     int c = (k+m-1)/m;

//     vector<pair<int,int>> vp2;
//     for(int i=0; i<c; i++) vp2.push_back(vp[i]);

//     sort(vp2.begin(), vp2.end(), cmp2);

//     // for(int i=0; i<c; i++){
//     //     cout<<vp2[i].first<<" ";
//     // }
//     // cout<<endl;

//     int ans=0;

//     if(k%m){
//         int ans1=0;
//         int d=0;
//         for(int i=0; i<vp2.size()-1; i++){
//             ans1+=(vp2[i].first+d)*m;
//             d+=m;
//             // debug(ans1);
//         }
//         ans1+=(vp2.back().first+d)*(k%m);
//         // debug(ans1);

//         int ans2=0;
//         int d2=0;

//         ans2+=(vp2[0].first)*(k%m);
//         d2+=k%m;
//         // debug(ans2);
//         for(int i=1; i<vp2.size(); i++){
//             ans2+=(vp2[i].first+d2)*m;
//             d2+=m;
//             // debug(ans2);
//         }

//         ans=min(ans1, ans2);
//     }
//     else{
//         int d=0;
//         for(int i=0; i<c; i++){
//             ans+=(vp2[i].first+d)*m;
//             d+=m;
//         }
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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

bool cmp2(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int ans=0;
    int d=0;
    for(int i=0; i<n; i++){
        int x = min(m,k);
        ans+=(v[i]+d)*x;
        d+=x;
        k-=x;

        if(!k) break;
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