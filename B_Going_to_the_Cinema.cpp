// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int mx = *max_element(v.begin(), v.end());
//     map<int,int> m;
//     for(int i=0; i<n; i++) m[v[i]]++;

//     int ans=0;
//     int c=0;
//     for(auto p: m){
//         int a = p.first;
//         int f = p.second;

//         if(c>=a) ans++;
//         c+=f;
//     }
//     if(c>=mx) ans++;

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


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     set<int> s(v.begin(), v.end());

//     int ans=0;
//     for(int i=1; i<=n; i++){
//         for(auto a: s){
//             if(i>)
//         }
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int ans=0;
        for(int x=0; x<=n; x++){
        int cnt = lower_bound(v.begin(), v.end(), x) - v.begin();
        int cnt2 = upper_bound(v.begin(), v.end(), x) - v.begin();
        if(cnt==x && cnt2==x) ans++;
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