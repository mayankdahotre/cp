// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int x=1;
//     for(int i=1; i<n; i++) if(v[i]!=v[i-1]) x++;

//     vector<pair<int,int>> vf;

//     int a=v[0], f=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==a) f++;
//         else{
//             vf.push_back({f,a});
//             f=1;
//             a=v[i];
//         }
//     }
//     vf.push_back({f,a});

//     int mxf=0;
//     for(int i=0; i<vf.size(); i++) mxf = max(mxf, vf[i].first);

//     int mxfocc = 0;
//     for(int i=0; i<vf.size(); i++) if(vf[i].first==mxf) mxfocc++;

//     int ans=0;
//     if(mxfocc==1) ans++;

//     if(k>=n){
//         if((k-n)%x==0) ans+=(k-n)/x;
//         cout<<ans<<endl;
//         return;
//     }
//     else{
//         int sz = n;
//         while(vf.size()){
//             int mn = 1e18;
//             for(int i=0; i<vf.size(); i++) if(vf[i].first) mn=min(mn, vf[i].first);

//             int rsz = sz-mn*vf.size();
            
//             if(rsz<k && (sz-k)%mn==0){
//                 ans+=(sz-k)/mn;
//                 cout<<ans<<endl;
//                 return;
//             }

//             ans+=mn;
            
//             for(int i=0; i<vf.size(); i++) if(vf[i].first) vf[i].first-=mn;
//         }

//         cout<<"NO"<<endl;
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


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> vf;

//     int a=v[0];
//     int f=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==a) f++;
//         else{
//             vf.push_back(f);
//             f=1;
//             a=v[i];
//         }
//     }
//     vf.push_back(f);

//     sort(vf.begin(), vf.end());

//     int sz=n;

//     int vfs=vf.size();

//     int ans = (vfs==1 || (vf[vfs-1]!=vf[vfs-2]));

//     if(sz==k){
//         cout<<ans<<endl;
//         return;
//     }

//     if(k>n){
//         for(int i=1; i<=vf.back(); i++){
//             int l = lower_bound(vf.begin(), vf.end(), i) - vf.begin();

//             int x = vf.size()-l;

//             sz-=x;

//             ans+=x;

//             if(sz==k){
//                 cout<<ans<<endl;
//                 return;
//             }
//         }
//     }
//     else{
//         int x = vfs;

//         if((k-n)%vfs==0) ans+=(k-n)/vfs;

//         cout<<ans<<endl;
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

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> vf;
    int f = 1;
    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]) f++;
        else{
            vf.push_back(f);
            f = 1;
        }
    }
    vf.push_back(f);

    sort(vf.begin(), vf.end());

    int ans = 0;
    int p = -1;
    int s = n;
    int idx = 0;
    int t = 0;

    while(idx < vf.size()){
        int c = vf.size() - idx;

        if(c != p){
            if(k >= s && (k - s) % c == 0){
                ans++;
                p = c;
            }
        }

        s -= c; 
        
        while(idx < vf.size() && vf[idx] == t + 1){
            idx++;
        }
        
        t++;
    }

    cout << ans << endl;
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}