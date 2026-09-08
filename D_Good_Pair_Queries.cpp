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

//     string s,t;
//     cin>>s>>t;

//     vector<int> ps00(n+1,0), ps11(n+1,0), pd10(n+1,0), pd01(n+1,0);
//     for(int i=0; i<n; i++){
//         pd01[i+1]=pd01[i]+(s[i]=='0'+t[i]=='1');
//         pd10[i+1]=pd10[i]+(s[i]=='1'+t[i]=='0');
//         ps00[i+1]=ps00[i]+(s[i]=='0'+t[i]=='0');
//         ps11[i+1]=ps11[i]+(s[i]=='1'+t[i]=='1');
//     } 

//     while(q--){
//         int l,r;
//         cin>>l>>r;
        
//         int m=r-l+1;
//         int s00 = ps00[r]-ps00[l-1];
//         int s11 = ps11[r]-ps11[l-1];
//         int d01 = pd01[r]-pd01[l-1];
//         int d10 = pd10[r]-pd10[l-1];

//         if(s00+s11>=abs(d01-d10)) yes;
//         else no;
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

    string s,t;
    cin>>s>>t;

    vector<int> ps00(n+1,0), ps11(n+1,0), pd10(n+1,0), pd01(n+1,0);
    for(int i=0; i<n; i++){
        pd01[i+1]=pd01[i]+(s[i]=='0' && t[i]=='1');
        pd10[i+1]=pd10[i]+(s[i]=='1' && t[i]=='0');
        ps00[i+1]=ps00[i]+(s[i]=='0' && t[i]=='0');
        ps11[i+1]=ps11[i]+(s[i]=='1' && t[i]=='1');
    } 

    while(q--){
        int l,r;
        cin>>l>>r;
        
        int m=r-l+1;
        int s00 = ps00[r]-ps00[l-1];
        int s11 = ps11[r]-ps11[l-1];
        int d01 = pd01[r]-pd01[l-1];
        int d10 = pd10[r]-pd10[l-1];

        if(abs(d01 - d10) <= s00 + s11) yes;
        else no;
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