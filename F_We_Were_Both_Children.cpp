// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans=0;
//     for(int i=1; i<=n; i++){
//         int cur = 0;
//         for(int j=0; j<n; j++) if(i%v[j]==0) cur++;
//         ans = max(ans, cur);
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> m;
    for(int i=0; i<n; i++) m[v[i]]++;

    // sort(v.begin(), v.end());

    // vector<int> v2(n+1,0);
    // for(int i=0; i<n; i++){
    //     // if(v[i]>n) break;
    //     if(v[i]>n) continue;
    //     for(int j=v[i]; j<=n; j+=v[i]) v2[j]++;
    // }


    vector<int> v2(n+1,0);
    for(auto p: m){
        int a = p.first;
        int f = p.second;
        if(a>n) break;
        for(int j=a; j<=n; j+=a) v2[j]+=f;
    }

    int ans = *max_element(v2.begin(), v2.end());

    // int ans=0;
    // for(int i=1; i<=n; i++){
    //     int cur = 0;
    //     for(int j=0; j<n; j++) if(i%v[j]==0) cur++;
    //     ans = max(ans, cur);
    // }

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

