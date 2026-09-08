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

//     int x=v[0], c=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==x) c++;
//         else c--;

//         if(c==0){
//             x=v[i];
//             c=1;
//         }
//     }

//     int f=0;
//     for(int i=0; i<n; i++) if(v[i]==x) f++;

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     int d=v.size();
//     d--;

//     if(d<f){
//         if(f-d>=2){
//             cout<<d+1<<endl;
//             return;
//         }
//         else{
//             cout<<d<<endl;
//             return;
//         }
//     }

//     cout<<f<<endl;
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
    int f = 0, cur = 1;
    for(int i = 1; i <= n; i++) {
        if(i < n && v[i] == v[i-1]) cur++;
        else { f = max(f, cur); cur = 1; }
    }

    v.erase(unique(v.begin(), v.end()), v.end());

    int d=v.size();
    d--;

    if(d<f){
        if(f-d>=2){
            cout<<d+1<<endl;
            return;
        }
        else{
            cout<<d<<endl;
            return;
        }
    }

    cout<<f<<endl;
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