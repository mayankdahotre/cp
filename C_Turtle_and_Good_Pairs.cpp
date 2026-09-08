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

//     vector<int> f(26,0);
//     int nmc = 26;

//     for(int i=0; i<s.length(); i++){
//         f[s[i]-'a']++;
//         if(f[s[i]-'a']>1) nmc--;
//     }

//     if(nmc==26){
//         cout<<s<<endl;
//         return;
//     }

//     string t;
//     // for(int i=0; i<26; i++){
//     //     if(f[i]==1) t+='a'+i;
//     // }

//     // if(nmc==25){
//     //     string t;
//     //     for(int i=0; i<26; i++){
//     //         if(f[i]>1) t+=string(f[i], 'a'+i);
//     //     }
//     //     for(int i=0; i<26; i++){
//     //         if(f[i]==1) t+=string(f[i], 'a'+i);
//     //     }

//     //     cout<<t<<endl;
//     //     return;
//     // }

//     for(int i=0; i<26; i++){
//         if(f[i]>1){
//             t+=string(f[i]-1, 'a'+i);
//             f[i]=1;
//         }
//     }
//     for(int i=25; i>=0; i--){
//         if(f[i]) t+='a'+i;
//     }

//     cout<<t<<endl;
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
    cin >> n;
    string s;
    cin >> s;

    vector<int> f(26, 0);
    for (char c : s) {
        f[c - 'a']++;
    }

    string t = "";
    int r = n;

    while (r > 0) {
        for (int i = 0; i < 26; i++) {
            if (f[i] > 0) {
                t += (char)('a' + i);
                f[i]--;
                r--;
            }
        }
    }

    cout << t << endl;
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