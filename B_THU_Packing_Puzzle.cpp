// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;


// void solve() {
//     int t,h,u;
//     cin>>t>>h>>u;

//     // debug(t);
//     // debug(h);
//     // debug(u);
    
//     int tt=t;

//     int ans=0;
//     ans+=max(0LL,min(t,u))*4-max(0LL, u-t)*1;
//     // ans+=max(0LL, max(t-u,h))*5-max(0LL, h-max(0LL,t-u))*2;
//     // debug(ans);
    
//     t=max(0LL, t-u);
//     u=max(0LL, u-tt);
//     // debug(t);
//     // debug(u);
//     ans+=max(0LL,min(t,h))*5-max(0LL,h-t)*2;
//     // debug(ans);

//     tt=t;
//     t=max(0LL, t-h);
//     h=max(0LL, h-tt);
//     // debug(t);
//     // debug(h);
//     ans+=t*2+1;
//     // debug(ans);
//     ans+=u*3+h*3;
//     // debug(ans);

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

// void solve() {
//     int t,h,u;
//     cin>>t>>h>>u;

//     int tt=t;

//     int ans=0;
//     ans+=max(0LL,min(t,u))*4;

//     t=max(0LL, t-u);
//     u=max(0LL, u-tt);

//     ans+=max(0LL,min(t/2,h))*7;

//     tt=t/2;
//     t=max(0LL, t-2*h)+max(0LL, 2*h-t);
//     h=max(0LL, h-tt);

//     if(t && h){
//         ans+=5;
//         h--;
//         t--;
//     }

//     if(t>0) ans+=t*2+1;

//     ans+=u*3+h*3;

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

void solve() {
    int t,h,u;
    cin>>t>>h>>u;

    int tt=t;

    int ans=0;

    ans+=max(0LL,min(t,u))*4;

    t=max(0LL, t-u);
    u=max(0LL, u-tt);

    ans+=max(0LL,min(t/2,h))*7;

    tt=min(h,t/2);

    t=max(0LL, t-2*tt);
    h=max(0LL, h-tt);

    if(h && t){
        ans+=5;
        h--;
        t--;
    }

    if(t) ans+=2*t+1;

    ans+=u*3+h*3;

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