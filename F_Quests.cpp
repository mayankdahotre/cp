// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cerr << #x << " = " << (x) << endl;
// #define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
// #define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
// #define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
// #define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
// #define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
// #define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
// #define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,c,d;
//     cin>>n>>c>>d;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end(), greater<int>());

//     if(v[0]*d<c){
//         cout<<"Impossible"<<endl;
//         return;
//     }
//     else{
//         int sum=0;
//         for(int i=0; i<min(n,d); i++) sum+=v[i];

//         if(sum<c){
//             cout<<"Infinity"<<endl;
//             return;
//         }
//     }

//     vector<int> pre(n,v[0]);
//     for(int i=1; i<n; i++) pre[i]=pre[i-1]+v[i];

//     int l=0, r=1e9;
//     while(l<=r){
//         int k = (l+r)/2;

//         int sum=0;

//         if(k>n){
//             int x = d/k;
//             int y = d%k;

//             sum = x*pre[n-1]+pre[y];
//         }
//         else{
//             int x = d/k;
//             int y = d%k;

//             sum = x*pre[k]+pre[y];
//         }

//         if(sum>c) l=k+1;
//         else r=k-1;
//     }

//     cout<<l<<endl;
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
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,c,d;
    cin>>n>>c>>d;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end(), greater<int>());

    if(v[0]*d<c){
        cout<<"Impossible"<<endl;
        return;
    }
    else{
        int sum=0;
        for(int i=0; i<min(n,d); i++) sum+=v[i];

        if(sum>=c){
            cout<<"Infinity"<<endl;
            return;
        }
    }

    vector<int> pre(n,v[0]);
    for(int i=1; i<n; i++) pre[i]=pre[i-1]+v[i];

    int l=0, r=d, ans=0;
    while(l<=r){
        int k = (l+r)/2;

        int x = d / (k + 1);
        int y = d % (k + 1);

        int sum = x * pre[min(k + 1, n) - 1];
        if(y > 0) sum += pre[min(y, n) - 1];

        if(sum>=c){
            ans = k;
            l=k+1;
        }
        else r=k-1;
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