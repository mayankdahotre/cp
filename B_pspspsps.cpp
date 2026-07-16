// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string t;
//     cin>>t;

//     int s=-1, p=-1;
//     for(int i=0; i<n; i++){
//         if(t[i]=='p'){
//             p=i;
//             break;
//         }
//     }

//     for(int i=n-1; i>=0; i--){
//         if(t[i]=='s'){
//             s=i;
//             break;
//         }
//     }

//     int d1=-1,d2=-1;
//     for(int i=0; i<n; i++){
//         if(t[i]=='.'){
//             d1=i;
//             break;
//         }
//     }

//     for(int i=n-1; i>=0; i--){
//         if(t[i]=='.'){
//             d2=i;
//             break;
//         }
//     }

//     if(p!=-1 && s!=-1){
//         if(p<s){
//             cout<<"NO"<<endl;
//             return;
//         }
//         else if(t[0]=='.' && t[t.length()-1]=='.'){
//             cout<<"NO"<<endl;
//             return;
//         }
//         else{
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//     else{
//         cout<<"YES"<<endl;
//         return;
//     }

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
    string t;
    cin >> t;

    if (t[0] == 's') t[0] = '.';
    if (t[n - 1] == 'p') t[n - 1] = '.';

    bool hp = false;
    bool hs = false;

    for (char c : t) {
        if (c == 'p') hp = true;
        if (c == 's') hs = true;
    }

    if (hp && hs) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
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