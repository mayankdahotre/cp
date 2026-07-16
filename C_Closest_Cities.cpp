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

//     int m;
//     cin>>m;

//     vector<pair<int,int>> q(m);
//     for(int i=0; i<m; i++) cin>>q[i].first>>q[i].second;

//     vector<int> r(n-1), l(n-1);
//     r[0]=1;
//     l[0]=1;

//     for(int i=1; i<n-1; i++){
//         if(v[i]-v[i-1]>v[i+1]-v[i]) r[i]=1;
//         else r[i]=v[i+1]-v[i];
//     }

//     for(int i=1; i<n-1; i++){
//         int j=n-1-i;
//         if(v[j]-v[j-1]>v[j+1]-v[j]) l[i]=1;
//         else l[j]=v[j+1]-v[j];
//     }

//     for(int i=1; i<n-1; i++) l[i]+=l[i-1];

//     for(int i=1; i<n-1; i++) r[i]+=r[i-1];

//     for(int i=0; i<m; i++){
//         int a = q[i].first-1;
//         int b = q[i].second-1;

//         if(a<b) cout<<r[b]-r[a]<<endl;
//         else cout<<l[b]-l[a]<<endl;
//     }

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

    int m;
    cin>>m;

    vector<pair<int,int>> q(m);
    for(int i=0; i<m; i++) cin>>q[i].first>>q[i].second;

    vector<int> r(n, 0), l(n, 0);

    for(int i=0; i<n-1; i++){
        if(i == 0 || v[i]-v[i-1] > v[i+1]-v[i]) r[i+1] = 1;
        else r[i+1] = v[i+1]-v[i];
    }

    for(int i=n-1; i>0; i--){
        if(i == n-1 || v[i+1]-v[i] > v[i]-v[i-1]) l[i-1] = 1;
        else l[i-1] = v[i]-v[i-1];
    }

    for(int i=1; i<n; i++) r[i]+=r[i-1];

    for(int i=n-2; i>=0; i--) l[i]+=l[i+1];

    for(int i=0; i<m; i++){
        int a=q[i].first-1;
        int b=q[i].second-1;

        if(a<b) cout<<r[b]-r[a]<<endl;
        else cout<<l[b]-l[a]<<endl;
    }

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