// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,a,b;
//     cin>>n>>a>>b;

//     auto cost[&](int x) -> int{
//         int res=0;
//         res+=x*a;
//         res+=(n-x+2)/2*b;
//         return res;
//     }

//     int l=0, h=n;
//     int ans=INTMAX;
//     while(l<=h){
//         int m = (l+h)/2;
//         int c = cost(m);
//         if(c<=ans){
//             ans=min(ans, c);
//             l=m;
//         }
//         else h=m;
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
//     int n, a, b;
//     cin >> n >> a >> b;

//     auto cost = [&](int x) -> int {
//         int res = 0;
//         res += x * a;
//         res += (n - x + 2) / 3 * b;
//         return res;
//     };

//     int l = 0, h = n;
//     int ans = LLONG_MAX;
//     while (h - l > 2) {
//         int m1 = l + (h - l) / 3;
//         int m2 = h - (h - l) / 3;
//         if (cost(m1) < cost(m2)) h = m2;
//         else l = m1;
//     }
//     for (int i = l; i <= h; i++)
//         ans = min(ans, cost(i));

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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, a, b;
//     cin>>n>>a>>b;

//     int ans=0;
//     ans+=(n/3) * min(b, 3*a);
//     ans+=min(b, (n%3)*a); 

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

int cost(int x, int n, int a, int b) {
    return x * b + max(0LL, n - 3 * x) * a;
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int l = 0, r = (n + 2) / 3;

    while(r - l > 3) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;

        if(cost(m1, n, a, b) <= cost(m2, n, a, b))
            r = m2;
        else
            l = m1;
    }

    int ans = 1e18;

    for(int i = l; i <= r; i++) {
        ans = min(ans, cost(i, n, a, b));
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) solve();
}