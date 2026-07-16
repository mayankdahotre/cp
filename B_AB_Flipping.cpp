// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     int ans=0;
//     int c1=0, c2=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='A'){
//             if(c1 && c2){
//                 ans+=c1+c2-1;
//                 c1=0;
//                 c2=0;
//             }
//             else if(c2) c2=0;
            
//             c1++;
//         }
//         else c2++;
//     }

//     if(c1 && c2) ans+=c1+c2-1;

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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int ans=0;

//     int pA=-1, pB=-1;
//     for(int i=0; i<n; i++){
//         if(s[i]=='A'){
//             pA=i;
//             break;
//         }
//     }

//     for(int i=n-1; i>=0; i--){
//         if(s[i]=='B'){
//             pB=i;
//             break;
//         }
//     }

//     if(pB<pA){
//         cout<<0<<endl;
//         return;
//     }

//     cout<<pB-pA<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while (T--) solve();

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int pA = -1, pB = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') {
            pA = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == 'B') {
            pB = i;
            break;
        }
    }

    if(pA == -1 || pB == -1 || pB < pA) {
        cout << 0 << endl;
        return;
    }

    cout << pB - pA << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}