// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int q;
//     cin>>q;

//     vector<int> l(q), k(q);
//     for(int i=0; i<q; i++) cin>>l[i]>>k[i];

//     vector<vector<int>> vb(n, vector<int> (31,0));
//     for(int i=0; i<n; i++) for(int j=0; j<31; j++) if(v[i]>>j & 1) vb[i][j]=1;

//     vector<vector<int>> vbp(n+1,0);
//     vbp[0] = vector(31,0);

//     for(int i=1; i<=n; i++){
//         vbp[i]=vbp[i-1];
//         for(int j=0; j<30; j++){
//             vbp[i][j]+=vb[i-1][j];
//         }
//     }

//     vector<int> ans(q);

//     auto check[&](int l, int r)->int{
//         int num = 0;
//         int len = r-l+1;
//         for(int i=0; i<31; i++) if(vbp[r][i]-vbp[l-1][i]==len) num|=(1<<i);

//         return num;
//     }
    
//     for(int i=0; i<q; i++){
//         int lo=l[i];
//         int hi=n;

//         int c=k[i];

//         while(lo<hi){
//             int mid = (lo+hi)/2;

//             int x=check(lo,mid);
//             if(x>=c) lo=mid+1;
//             else hi=mid-1;
//         }

//         ans[i]=lo;
//     }

//     for(int i=0; i<q; i++) cout<<ans[i]<<" ";
//     cout<<endl;

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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int q;
    cin>>q;

    vector<int> l(q), k(q);
    for(int i=0; i<q; i++) cin>>l[i]>>k[i];

    vector<vector<int>> vb(n, vector<int> (31,0));
    for(int i=0; i<n; i++) for(int j=0; j<31; j++) if(v[i]>>j & 1) vb[i][j]=1;

    // Fixed Syntax: properly allocate 2D vector dimensions
    vector<vector<int>> vbp(n+1, vector<int>(31, 0)); 

    for(int i=1; i<=n; i++){
        vbp[i]=vbp[i-1];
        for(int j=0; j<31; j++){ // Fixed: Change 30 to 31 to include all bits
            vbp[i][j]+=vb[i-1][j];
        }
    }

    vector<int> ans(q);

    // Fixed Syntax: auto check = [&](...) and 1LL for long long safety
    auto check = [&](int l, int r)->int{
        int num = 0;
        int len = r-l+1;
        for(int i=0; i<31; i++) if(vbp[r][i]-vbp[l-1][i]==len) num|=(1LL<<i);

        return num;
    };
    
    for(int i=0; i<q; i++){
        int lo=l[i];
        int hi=n;
        int c=k[i];
        int res = -1; // Added tracker for the best valid r

        while(lo<=hi){ // Fixed: lo <= hi
            int mid = (lo+hi)/2;

            int x=check(l[i],mid); // Fixed: Pass l[i] as the fixed left index, not lo
            if(x>=c) {
                res = mid; // mid is valid, save it!
                lo=mid+1;
            }
            else hi=mid-1;
        }

        ans[i]=res;
    }

    for(int i=0; i<q; i++) cout<<ans[i]<<" ";
    cout<<endl;

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