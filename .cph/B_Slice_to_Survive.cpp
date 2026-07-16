// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m,a,b;
//     cin>>n>>m>>a>>b;
//     int ans = 0;
//     n=min(n+1-a,a);
//     ans++;
//     m=min(m+1-b,b);
//     ans++;

//     while(n!=1){
//         if(n%2)n++;
//         n/=2;
//         ans++;
//     }

//     while(m!=1){
//         if(m%2)m++;
//         m/=2;
//         ans++;
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

// void solve() {
//     int n, m, a, b;
//     cin >> n >> m >> a >> b;
//     int ans = 0;

//     m = min(b, m - b + 1);
//     ans++;

//     n = min(a, n - a + 1);
//     ans++;

//     while (n > 1) {
//         ans++;
//         if (n % 2) n++;
//         n /= 2;
//     }

//     while (m > 1) {
//         ans++;
//         if (m % 2) m++;
//         m /= 2;
//     }

//     cout << ans << endl;
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

int cs(int r, int c) {
    int ans = 1;
    while (r > 1) {
        ans++;
        if (r % 2) r++;
        r /= 2;
    }
    while (c > 1) {
        ans++;
        if (c % 2) c++;
        c /= 2;
    }
    return ans;
}

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = LLONG_MAX;

    ans = min(ans, cs(a, m));            
    ans = min(ans, cs(n - a + 1, m));    
    ans = min(ans, cs(n, b));           
    ans = min(ans, cs(n, m - b + 1));   

    cout << ans << endl;
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
