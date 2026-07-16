// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// bool cmp(pair<int,int> a, pair<int,int> b){
//     if(a.first=b.first) return a.second<=b.second;
//     return a.first<b.first;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<pair<int,int>> vp(n);
//     for(int i=0; i<n; i++){
//         vp[i].second=i;
//         cin>>vp[i].first;
//     }

//     sort(vp.begin(), vp.end(), cmp);

//     vector<pair<int,int>> pres = vp;
//     pres[0].first=vp[0].first;
//     for(int i=1; i<n; i++) pres[i].first+=pres[i-1].first;

//     vector<int> ans(n,0);
    
//     for(int i=0; i<n; i++){
//         int idx = vp[i].second;
//         ans[idx] = i;

//         int ps = pres[i].first;
//         int j=i+1;
//         while(vp[i].first<=ps){
//             ps+=vp[j].first;
//             j++;
//         }

//         ans[idx]+=j=i-1;
//     }

//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
//     cout<<endl;

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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// bool cmp(pair<int,int> a, pair<int,int> b){
//     if(a.first == b.first) return a.second < b.second;
//     return a.first < b.first;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<pair<int,int>> vp(n);

//     for(int i=0; i<n; i++){
//         cin >> vp[i].first;
//         vp[i].second = i;
//     }

//     sort(vp.begin(), vp.end(), cmp);

//     vector<int> pref(n);

//     pref[0] = vp[0].first;

//     for(int i=1; i<n; i++) pref[i] = pref[i-1] + vp[i].first;

//     vector<int> ans(n);

//     for(int i=0; i<n; i++){
//         int ps = pref[i];
//         int j = i + 1;

//         while(j < n && vp[j].first <= ps){
//             ps += vp[j].first;
//             j++;
//         }

//         ans[vp[i].second] = j - 1;
//     }

//     for(int i=0; i<n; i++) cout << ans[i] << ' ';
//     cout<<endl;

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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> vp(n);

    for(int i=0; i<n; i++){
        cin >> vp[i].first;
        vp[i].second = i;
    }

    sort(vp.begin(), vp.end(), cmp);

    vector<int> pref(n);
    pref[0] = vp[0].first;

    for(int i=1; i<n; i++) pref[i] = pref[i-1] + vp[i].first;

    vector<int> reach(n);
    reach[n-1] = n-1;
    for(int i=n-2; i>=0; i--){
        if(pref[i] >= vp[i+1].first) reach[i] = reach[i+1];
        else reach[i] = i;
    }

    vector<int> ans(n);
    for(int i=0; i<n; i++) ans[vp[i].second] = reach[i];

    for(int i=0; i<n; i++) cout << ans[i] << ' ';
    cout << endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}