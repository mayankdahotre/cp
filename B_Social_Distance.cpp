// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     if(n>m){
//         cout<<"NO"<<endl;
//         return;
//     }
//     else{
//         int sum = 0;
//         for(int i=0; i<n-1; i++){
//             sum++;
//             sum+=max(a[i],a[i+1]);
//         }
//         sum++;
//         sum+=max(a[0],a[n-1]);
        
//         if(sum>m){
//             cout<<"NO"<<endl;
//             return;
//         }
//         else{
//             cout<<"YES"<<endl;
//             return;
//         }
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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n > m) {
        cout << "NO"<<endl;
        return;
    }

    int sum = 0, minn = LLONG_MAX, maxn = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        minn = min(minn, a[i]);
        maxn = max(maxn, a[i]);
        sum += a[i];
    }

    sum += (maxn - minn) + n;  

    cout << (sum <= m ? "YES" : "NO") <<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}

