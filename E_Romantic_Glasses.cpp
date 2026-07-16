// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n+2,0);
//     for(int i=2; i<n+2; i++) cin>>v[i];

//     for(int i=4; i<n+2; i++) v[i]+=v[i-2];

//     set<int> s;
//     for(int i=0; i<n+1; i++){
//         if(s.find(abs(v[i]-v[i+1]))!=s.end()){
//             cout<<"YES"<<endl;
//             return;
//         }
//         s.insert(abs(v[i]-v[i+1]));
//     }

//     cout<<"NO"<<endl;
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

    vector<int> v(n+2,0);
    for(int i=2; i<n+2; i++) cin>>v[i];

    for(int i=4; i<n+2; i++) v[i]+=v[i-2];

    set<int> s;
    s.insert(0);

    for(int i=2;i<n+2;i++){
        int cur;

        if(i%2==0) cur=v[i]-v[i-1];
        else cur=v[i-1]-v[i];

        if(s.find(cur)!=s.end()){
            cout<<"YES"<<endl;
            return;
        }

        s.insert(cur);
    }

    cout<<"NO"<<endl;
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