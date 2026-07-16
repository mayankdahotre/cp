// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n+1);
//     for(int i=1; i<=n; i++) cin>>v[i];


//     int ans=0;
//     for(int i=1; i<=n; i++){
//         // debug(i);
//         int a=i+v[i]-(i%v[i])-1;
//         // debug(a);
//         for(int j=a; j<=n; j+=v[i]){
//             // debug(j);
//             if(v[i]*v[j]==i+j) ans++;
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];

    int ans=0;
    for(int i=1; i<=n; i++){
        int tar = (v[i] - i%v[i]) % v[i];  
        if(tar == 0) tar = v[i];         

        int a;
        if(tar > i) a = tar;              
        else a = tar + ((i-tar)/v[i]+1)*v[i]; 

        for(int j=a; j<=n; j+=v[i]){
            if(v[i]*v[j]==i+j) ans++;
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