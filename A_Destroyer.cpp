// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     if(v)

//     int prev = 1e8;
//     int x=v[0], c=0, px=-1;
//     for(int i=0; i<n; i++){
//         if(v[i]==x) c++;
//         else{
//             if(v[i]!=px+1){
//                 no;
//                 return;
//             }
//             if(c>prev){
//                 no;
//                 return;
//             }
//             prev=c;
//             c=1;
//             x=v[i];
//         }
//     }
//     if(x!=px+1){
//         no;
//         return;
//     }
//     if(c>prev){
//         no;
//         return;
//     }

//     yes;
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
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int prev = 1e8;
    int x=v[0], c=0, px=-1;

    if(x!=px+1){
        no;
        return;
    }

    for(int i=0; i<n; i++){
        if(v[i]==x) c++;
        else{
            px = x;
            if(v[i]!=px+1){
                no;
                return;
            }
            if(c>prev){
                no;
                return;
            }
            prev=c;
            c=1;
            x=v[i];
        }
    }
    if(x!=px+1){
        no;
        return;
    }
    if(c>prev){
        no;
        return;
    }

    yes;
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