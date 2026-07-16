// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     string s;
//     cin>>s;

//     vector<int> f(26,0);

//     int c=0;
//     for(int i=0; i<s.length(); i++){
//         if(!f[s[i]-'a']) c++;
//         f[s[i]-'a']++;
//     }

//     if(c==1){
//         cout<<"YES"<<endl;
//         return;
//     }
//     else if(c==2){
//         for(int i=0; i<s.length()-2; i++){
//             if(s[i]!=s[i+2]){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }

//         cout<<"YES"<<endl;
//         return;
//     }
//     else{
//         // debug(c);
//         // debugv(f);
//         // debug('z'-'a');
//         for(int i=0; i<26; i++){
//             if(f[i]>=2){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }

//         // debugv(f);

//         cout<<"YES"<<endl;
//         return;
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

bool ok(string s){
    int n = s.length();

    vector<int> f(26, 0);

    for(int i = 0; i < n; i++){
        if(f[s[i]-'a']) return false;
        f[s[i]-'a']++;
    }

    return true;
}

void solve() {
    string s;
    cin >> s;

    int n = s.length();

    for(int i = 1; i <= 26; i++){
        string t = s.substr(0, i);

        if(!ok(t)) continue;

        int nl = (n + i - 1) / i;
        string ts;
        for(int j = 0; j < nl; j++) ts += t; 

        if(ts.substr(0, n) == s){ 
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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