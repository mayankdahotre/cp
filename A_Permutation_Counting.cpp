// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> pre=v;
//     for(int i=1; i<n; i++) pre[i]+=pre[i-1];

//     // debug(l);
//     // debug(k);
//     // debug((l+1)*v[l]-pre[l]);
    
//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     int exmx = v.back()*n-sum;

//     int ans=0;
//     if(k>=sum) ans=sum+k-n+1;
//     else{
//         int x=0;
//         int l=0, r=n-1;
//         while(l<=r){
//             int m=(l+r)/2;

//             if((m+1)*v[m]-pre[m]<=k) l=m+1;
//             else r=m-1;
//         }

//         ans=pre[l]*n+(n-1-l+k-pre[l]);
//     }

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
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> pre=v;
//     for(int i=1; i<n; i++) pre[i]+=pre[i-1];

//     // debug(l);
//     // debug(k);
//     // debug((l+1)*v[l]-pre[l]);
    
//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     int ans=0;
//     if(k>=sum) ans=sum+k-n+1;
//     else{
//         int x=0;
//         int l=0, r=n-1;
//         while(l<=r){
//             int m=(l+r)/2;

//             if((m+1)*v[m]-pre[m]<=k) l=m+1;
//             else r=m-1;
//         }
//         l--;

//         int add = v[l]*(l+1)-pre[l];
//         int nxt = n-l-1;
//         int ex = k-add;

//         ans=v[l]*n+ex+nxt+n-1;
//     }

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






#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> pre=v;
    for(int i=1; i<n; i++) pre[i]+=pre[i-1];

    int l=0, r=n-1;
    while(l<=r){
        int m=(l+r)/2;

        if((m+1)*v[m]-pre[m]<=k) l=m+1;
        else r=m-1;
    }

    int add = (r+1)*v[r]-pre[r];
    int ex = k-add;

    int w = v[r] + ex/(r+1);
    int rem = ex%(r+1);

    int c = (n-1-r) + rem;
    int ans = w*n + c - n + 1;

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