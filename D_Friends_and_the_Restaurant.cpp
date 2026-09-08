// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> x(n), y(n);
//     for(int i=0; i<n; i++) cin>>x[i];
//     for(int i=0; i<n; i++) cin>>y[i];

//     vector<pair<int,int>> v(n);
//     for(int i=0; i<n; i++) v.push_back({x[i], y[i]});

//     bool cmp(pair<int,int> a, pair<int,int> b)[&]{
//         if(a.first-a.second==b.first-b.second) return a.second<=b.second;
//         return a.first-a.second<b.first-b.second;
//     }

//     sort(v.begin(), v.end(), cmp());

//     vector<int> d(n);
//     for(int i=0; i<n; i++) d[i]=v[i].first-v[i].second;

//     int i=0, j=n-1;
//     int ans=0;
//     while(i<j){
//         int x = 0;
//         x+=d[i]+d[j];
//         if(x>=0){
//             ans++;
//             i++;
//             j--;
//         }
        
//         while(x<0 && i<j){
//             if(i==j) break;
//             j--;
//             x+=d[j];
//         }

//         ans++;
//         j--;
//         i++;
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
    int n;
    cin>>n;

    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];

    vector<int> d(n);
    for(int i=0; i<n; i++) d[i]=x[i]-y[i];

    sort(d.begin(), d.end());

    int i=0, j=n-1;
    int ans=0;

    while(i<j){
        if(d[i]+d[j]<=0){
            ans++;
            i++;
            j--;
        } else {
            j--;
        }
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