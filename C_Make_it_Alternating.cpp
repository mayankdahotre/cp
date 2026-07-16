// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int f(int n){
//     if(n==1) return 1;
//     return n*f(n-1);
// }

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();
//     int cur=s[0];
//     int len=0;
//     int ns=1;
//     int nop=0;

//     for(int i=0; i<n; i++){
//         if(s[i]==cur) len++;
//         else{
//             ns*=f(len);
//             nop+=len-1;
//             len=1;
//             cur=s[i];
//         }
//     }
//     nop+=len-1;
//     ns*=f(len);

//     cout<<nop<<" "<<ns<<endl;
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

// int f(int n){
//     if(n==0) return 1;
//     if(n==1) return 1;
//     return n*f(n-1);
// }

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();
//     char cur = s[0];    
//     int len = 1;        
//     int ns = 1;
//     int nop = 0;
//     int del=0;

//     for(int i=1; i<n; i++){    
//         if(s[i]==cur) len++;
//         else{
//             ns *= len;
//             nop += len-1;
//             len = 1;
//             cur = s[i];
//         }
//     }
//     nop+=len-1;
//     ns*=len;
//     ns*=f(nop);

//     cout<<nop<<" "<<ns<<endl;
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
const int MOD = 998244353;

int f(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return (n % MOD * f(n-1)) % MOD;  
}

void solve() {
    string s;
    cin>>s;

    int n = s.length();
    char cur = s[0];    
    int len = 1;        
    int ns = 1;
    int nop = 0;

    for(int i=1; i<n; i++){    
        if(s[i]==cur) len++;
        else{
            ns = (ns * len) % MOD;    
            nop += len-1;
            len = 1;
            cur = s[i];
        }
    }
    nop += len-1;
    ns = (ns * len) % MOD;          
    ns = (ns * f(nop)) % MOD;      

    cout<<nop<<" "<<ns<<endl;
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