// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// bool cmp(string a, string b){
//     for(int i=0; i<a.length(); i++){
//         if(a[i]==b[i]) continue;
//         else return a[i]<b[i];
//     }
// }

// void solve() {
//     int n,l;
//     cin>>n>>l;

//     vector<string> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end(), cmp);

//     string ans=0;
//     for(int i=0; i<n; i++) ans+=v[i];

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

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

bool cmp(string a, string b){
    for(int i=0; i<a.length(); i++){
        if(a[i]==b[i]) continue;
        else return a[i]<b[i];
    }
    return false;
}

void solve() {
    int n,l;
    cin>>n>>l;

    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end(), cmp);

    string ans="";
    for(int i=0; i<n; i++) ans+=v[i];

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}