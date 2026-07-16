// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     vector<int> pre0(n,0), suf1(n,0);
//     pre0[0]=s[0]=='0';
//     suf1[n-1]=s[n-1]=='1';
//     for(int i=1; i<n; i++) pre0[i]+=pre0[i-1]+(s[i]=='0');
//     for(int i=n-2; i>=0; i--) suf1[i]+=suf1[i+1]+(s[i]=='1');

//     int ans=-1;
//     for(int i=0; i<=n; i++){
//         if(pre0[i-1]>=i/2 && suf1[i-1]>(n-i+1)/2){
//             ans=i;
//             break;
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

    string s;
    cin>>s;

    vector<int> pre0(n+1,0), suf1(n+1,0); 
    
    for(int i=0; i<n; i++) pre0[i+1] = pre0[i] + (s[i]=='0');
    for(int i=n-1; i>=0; i--) suf1[i] = suf1[i+1] + (s[i]=='1');

    int ans=-1;
    int md=2e9;

    for(int i=0; i<=n; i++){
        if(pre0[i]*2 >= i && suf1[i]*2 >= (n-i)){
            int cur = abs(i - (n-i));
            if(cur < md) {
                md = cur;
                ans = i;
            }
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