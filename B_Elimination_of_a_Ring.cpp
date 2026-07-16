// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(v.size()<3) { cout<<v.size()<<endl; return; }

//     v.push_back(v[0]);
//     v.push_back(v[1]);

//     // vector<int> v2(n,0);
//     int ans=0;
//     for(int i=n; i>=0; i--){
//         if(v[i-1]!=v[i+1]){
//             // v2[i]=1;
//             ans++;
//         }
//     }

//     // vector<int> v3;
//     // for(int i=0; i<n; i++) if(!v2[i]) v3.push_back(v[i]);

//     int m = n - ans;
//     if(m%2) ans+=m/2-1;
//     else ans+=m/2+1;

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
    int d=0;
    for(int i=0; i<n; i++){
        if(!m.count(v[i])) d++;
        if(d>2) break;
        m[v[i]]++;
    }

    if(d==2) cout<<n/2+1<<endl;
    else cout<<n<<endl;

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