// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << "=" << x << endl;
// #define debugv(v) cout << #v << "="; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << "=" << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m,k;;
//     cin>>n>>m>>k;

//     string s;
//     cin>>s;

//     s='L'+s;
//     s+='L';

//     int i=0;
//     while(i<=n){
//         int e=-1;
//         for(int j=i; j<i+m; j++){
//             if(s[j]=='L') e=j;
//         }

//         if(e!=-1){
//             i=e;
//             continue;
//         }
        
//         for(int j=i; j<i+m; j++){
//             if(s[j]=='W') e=j;
//         }
        
//         if(e!=-1){
//             i=e;

//             while(i<=n){
//                 if(!k){
//                     cout<<"NO"<<endl;
//                     return;
//                 }

//                 if(s[i]=='C'){
//                     cout<<"NO"<<endl;
//                     return;
//                 }
//                 else if(s[i]=='L') break;
                
//                 i++;
//                 k--;
//             }
//         }
//         else{
//             cout<<"NO"<<endl;
//             return;
//         }
//     }

//     cout<<"YES"<<endl;
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
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    s='L'+s+'L';

    int i=0;
    while (i < n+1) {
        if(s[i]=='L') {
            int nl=-1;
            int nw=-1;

            for (int j=i+1; j <= min(n+1, i+m); j++) {
                if(s[j]=='L') {
                    nl=j;
                } else if(s[j]=='W') {
                    nw=j;
                }
            }

            if(nl!=-1) i=nl;
            else if(nw != -1) i=nw;
            else {
                cout<<"NO"<<endl;
                return;
            }
        } 
        else if(s[i]=='W') {
            if(k <= 0) {
                cout << "NO"<<endl;
                return;
            }
            k--;
            i++;
            if(s[i]=='C') {
                cout << "NO"<<endl;
                return;
            }
        }
    }

    cout << "YES"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}