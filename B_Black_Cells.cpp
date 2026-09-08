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

//     vector<int> d(n);
//     for(int i=0; i<n-1; i++) d[i]=v[i+1]-v[i];

//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }

//     int ans=0;
//     if(n%2==0){
//         for(int i=0; i<n; i+=2) ans=max(ans, v[i+1]-v[i]);
//         cout<<ans<<endl;
//         return;
//     }
//     else{
//         vector<int> pred, sufd;
//         for(int i=0; i<n; i+=2) pred.push_back(v[i+1]-v[i]);
//         for(int i=n-1; i>=0; i-=2) sufd.push_back(v[i]-v[i-1]);

//         int m = n/2;
        
//         for(int i=1; i<m; i++) pred[i]=max(pred[i], pred[i-1]);
//         for(int i=m-2; i>=0; i--) sufd[i]=max(sufd[i], sufd[i+1]);

//         int ans=INT_MAX;
//         for(int i=0; i<m; i++) ans=min(ans,max(pred[i], sufd[i]));

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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     if(n == 1){
//         cout << 1 << endl;
//         return;
//     }

//     if(n % 2 == 0){
//         int ans = 0;
//         for(int i = 0; i < n; i += 2)
//             ans = max(ans, v[i + 1] - v[i]);

//         cout << ans << endl;
//         return;
//     }

//     int m = n / 2;

//     vector<int> pre(m + 1, 0), suf(m + 1, 0);

//     for(int i=0; i<m; i++) pre[i+1]=max(pre[i],v[2*i+1]-v[2*i]);

//     for(int i=m-1; i>=0; i--) suf[i] = max(suf[i+1],v[2*i+2]-v[2*i+1]);

//     int ans = LLONG_MAX;

//     ans = min(ans, suf[0]);
//     ans = min(ans, pre[m]);

//     for(int i = 1; i < n - 1; i += 2){
//         int cur = max(pre[i / 2], suf[i / 2 + 1]);
//         cur = max(cur, v[i + 1] - v[i - 1]);
//         ans = min(ans, cur);
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--){
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

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    if(n % 2 == 0){
        int ans = 0;
        for(int i = 0; i < n; i += 2)
            ans = max(ans, a[i + 1] - a[i]);

        cout << ans << endl;
        return;
    }

    int ans = LLONG_MAX;

    for(int gap = -1; gap < n; gap++){

        vector<int> b;

        if(gap == -1){
            b.push_back(a[0] - 1);
            for(auto x : a) b.push_back(x);
        }
        else if(gap == n - 1){
            for(auto x : a) b.push_back(x);
            b.push_back(a.back() + 1);
        }
        else{
            for(int i = 0; i <= gap; i++)
                b.push_back(a[i]);

            b.push_back(a[gap + 1] - 1);

            for(int i = gap + 1; i < n; i++)
                b.push_back(a[i]);
        }

        int cur = 0;
        for(int i = 0; i < (int)b.size(); i += 2)
            cur = max(cur, b[i + 1] - b[i]);

        ans = min(ans, cur);
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
        solve();

    return 0;
}