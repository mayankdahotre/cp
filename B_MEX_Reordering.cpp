// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     bool ok0 = find(v.begin(), v.end(), 0) != v.end();
//     bool ok1 = find(v.begin(), v.end(), 1) != v.end();

//     int z=0;
//     for(int i=0; i<n; i++) if(v[i]==0) z++;

//     if(ok0 && ok1) cout<<"YES"<<endl;
//     else if(z==1 && n==2) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

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

    vector<int> cnt(n+1, 0);
    for(int i=0; i<n; i++) cnt[v[i]]++;

    if(cnt[0]==0) cout<<"NO"<<endl;
    else if(cnt[1]>0) cout<<"YES"<<endl;
    else if(cnt[0]==1) cout<<"YES"<<endl;
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