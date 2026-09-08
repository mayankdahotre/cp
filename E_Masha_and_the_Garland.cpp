// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,q;
//     cin>>n>>q;

//     string s;
//     cin>>s;

//     string t;
//     for(int i=0; i<n; i++){
//         if(i%2==0 && s[i]=='0') t+='0';
//         else if(i%2==0) t+='1';

//         if(i%2 && s[i]=='1') t+='0';
//         else if(i%2) t+='1';
//     }

//     while(q--){
//         // cout<<endl;

//         int l,r,k;
//         cin>>l>>r>>k;

//         l--;
//         r--;

//         string tq = t.substr(l, r-l+1);

//         // debug(tq);

//         tq.erase(unique(tq.begin(), tq.end()), tq.end());

//         // debug(tq);

//         int o=0, z=0;
//         for(auto c: tq){
//             if(c-'0'==0) z++;
//             else o++;
//         }

//         // debug(o);
//         // debug(z);

//         if(min(o,z)<=k) yes;
//         else no;
//         continue;
//     }

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
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    string t;
    for(int i=0; i<n; i++){
        if(i%2==0 && s[i]=='0') t+='0';
        else if(i%2==0) t+='1';

        if(i%2 && s[i]=='1') t+='0';
        else if(i%2) t+='1';
    }

    vector<int> pre(n, 0);
    for (int i = 0; i < n - 1; i++) pre[i + 1] = pre[i] + (t[i] != t[i + 1]);

    while(q--){
        int l,r,k;
        cin>>l>>r>>k;

        int tr = pre[r-1]-pre[l-1];
        int mn = (tr+1)/2;

        if(mn<=k) yes;
        else no;

        continue;
    }

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