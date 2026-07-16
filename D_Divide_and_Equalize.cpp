// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     map<int,int> mpf;
//     for(int i=0; i<n; i++){
//         int x = v[i];

//         for(int j=2; j*j<=x; j++){
//             while(x%j==0){
//                 mpf[j]++;
//                 x/=j;
//             }
//             debug(j);
//             debug(mpf[j]);
//         }
//     }

//     debug(n);
//     bool ok=true;
//     for(auto p: mpf){
//         // debug(p.first);
//         debug(p.second);
//         if(p.second%n){
//             bool ok = false;
//             break;
//         }
//     }

//     if(ok) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mpf;
    for(int i=0; i<n; i++){
        int x = v[i];

        for(int j=2; j*j<=x; j++){
            while(x%j==0){
                mpf[j]++;
                x/=j;
            }
        }
        if(x > 1) mpf[x]++;        
    }

    bool ok = true;
    for(auto p: mpf){
        if(p.second % n){
            ok = false;            
            break;
        }
    }

    if(ok) cout<<"YES"<<endl;
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