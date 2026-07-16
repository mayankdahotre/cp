// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,x;
//     cin>>n>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int l=0, r=x;
//     while(true){
//         int m = (l+r)/2, sum=0;
//         for(int i=0; i<n; i++){
//             sum+=max(0,v[i]-m);
//         }
//         if(sum<x) l=m+1;
//         else if(sum>x) r=m-1;
//         else{
//             cout<<m<<endl;
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
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = 2e9; 
    // int l = 0, r = x+1;  
 
    int ans = -1;

    while (l <= r) {
        int m = (l + r) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += max(0LL, m - v[i]);  
        }

        if (sum <= x) {
            ans = m;      
            l = m + 1;    
        } else {
            r = m - 1;   
        }
    }

    cout << ans << endl;
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
