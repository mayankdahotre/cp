// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end(), greater<int>());
//     reverse(v.begin()+1, v.end());

//     // int mex = 0;
//     int mx = v[0];

    // int ans = n*mx;
    // map<int,int> m;
    // for(int i=0; i<n; i++){
    //     m[v[i]]++;

    //     int mex = 0;
    //     while(m.count(mex)) mex++;

    //     ans+=mex;
    // }

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
//     cout<<endl;

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

//     vector<int> v2;

//     int mx = *max_element(v.begin(), v.end());
//     v2.push_back(mx);

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     for(auto i: v) v2.push_back(i);

//     while(v2.size()<n) v2.push_back(mx);

//     int ans=mx*n;
    
//     map<int,int> mp;
//     for(int i=0; i<n-1; i++){
//         mp[v[i]]++;

//         int mex = 0;
//         while(mp.count(mex)) mex++;

//         // cout<<mex<<" ";

//         ans+=mex;
//         // cout<<ans-mx+1<<" ";
//     }
//     // cout<<endl;

//     // for(int i=0; i<n; i++) cout<<v2[i]<<" ";
//     // cout<<endl;

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

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    int mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    sort(v.begin(), v.end());

    int mex = 0;

    for(int i = 0; i < n; i++) {
        if(v[i] == mex) mex++;
    }

    int ans = mx * n;

    if(mx == 0) ans++;

    int cur = 0;

    for(int i = 1; i < n; i++) {
        if(cur < mex) cur++;

        if(cur == mx) cur++;

        ans += cur;
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}