// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans=0;
//     for(int i=0; i<n-1; i++) if(abs(v[i]-v[i+1])==1) ans++;

//     for(int i=0; i<n-1; i++) if(__gcd(v[i], v[i+1])==min(v[i], v[i+1]) && 2*__gcd(v[i], v[i+1])==max(v[i], v[i+1])) ans++;

//     for(int i=0; i<n; i++) if(min(v[i], v[i+1])==1 && max(v[i],v[i+1])==2) ans--;
    
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

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     int ans = 0;

//     for(int i = 0; i < n-1; i++){
//         int a = v[i], b = v[i+1];

//         if(abs(a - b) == 1) ans++;
//         else if(max(a,b) == 2 * min(a,b)) ans++;
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) solve();
// }




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     int ans = 0;

//     for(int l = 0; l < n; l++){
//         int g = 0;
//         int mn = v[l], mx = v[l];

//         for(int r = l; r < n; r++){
//             g = __gcd(g, v[r]);
//             mn = min(mn, v[r]);
//             mx = max(mx, v[r]);

//             if(mx - mn == g) ans++;

//             if(mx - mn > n) break;
//         }
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) solve();
// }



#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        int a = v[i], b = v[i+1];
        if(__gcd(a, b) == abs(a - b)) ans++;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}