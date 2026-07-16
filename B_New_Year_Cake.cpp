// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; flr(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; flr(auto &r : v){ flr(auto &x : r) cout << x << ' '; cout << endl; } }

// // int fl(int x, int y){
// //     int sum=0;
// //     int t=y;

// //     while(true){
// //         if(sum>t) break;
// //         sum+=(1<<t);
// //         t+=2;
// //     }

// //     return t;
// // }

// int fl(int x, int y){
//     int sum = 0;
//     int t = y;

//     while(true){
//         if(sum > x) break; 
        
//         if (t >= 62) break; 
        
//         sum += (1LL << t); 
//         t += 2;
//     }

//     return t;
// }

// void solve() {
//     int a,b;
//     cin>>a>>b;

//     int ans=0;

//     if(abs(fl(a,0)-fl(b,1))==1) ans=max(ans, max(fl(a,0), fl(b,1)));

//     if(abs(fl(a,1)-fl(b,0))==1) ans=max(ans, max(fl(a,1), fl(b,0)));

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
// #define debugv(v) cout << #v << " = "; flr(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; flr(auto &r : v){ flr(auto &x : r) cout << x << ' '; cout << endl; } }

// int fl(int x, int y){
//     int sum = 0;
//     int t = y;
//     int cnt = 0;

//     while(true){
//         if (t >= 62) break; 
        
//         if (sum + (1LL << t) > x) break; 
        
//         sum += (1LL << t); 
//         cnt++; 
//         t += 2;
//     }

//     return cnt; 
// }

// void solve() {
//     int a,b;
//     cin>>a>>b;

//     int ans=0;

//     int w1 = fl(a, 0), d1 = fl(b, 1);
//     int t1 = w1 + d1;
//     if (d1 > w1) t1 = w1 * 2 + 1;
//     if (w1 > d1 + 1) t1 = d1 * 2 + 1;
//     ans = max(ans, t1);

//     int d2 = fl(b, 0), w2 = fl(a, 1);
//     int t2 = d2 + w2;
//     if (w2 > d2) t2 = d2 * 2 + 1;
//     if (d2 > w2 + 1) t2 = w2 * 2 + 1;
//     ans = max(ans, t2);

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

void solve() {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    int w = a, d = b, sz = 1, t1 = 0;
    while (true) {
        if (t1 % 2 == 0) {
            if (w >= sz) w -= sz; else break;
        } else {
            if (d >= sz) d -= sz; else break;
        }
        t1++;
        sz *= 2;
    }
    ans = max(ans, t1);

    w = a, d = b, sz = 1;
    int t2 = 0;
    while (true) {
        if (t2 % 2 == 0) {
            if (d >= sz) d -= sz; else break;
        } else {
            if (w >= sz) w -= sz; else break;
        }
        t2++;
        sz *= 2;
    }
    ans = max(ans, t2);

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}