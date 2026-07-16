// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int m, k, a1, ak;
//     cin>>m>>k>>a1>>ak;

//     // if(ak*k>=m){ 
//     //     int rem = m%k;
//     //     cout<<max(0LL, a1-rem)<<endl; return; 
//     // }
//     // else if(m-ak*k<=a1){ cout<<m-ak*k<<endl; return; }
//     // // else if(m<=a1){ cout<<}
//     // else{
//     //     int rem = m-a1-ak*k;
//     //     int cnt = rem/k;
//     //     rem = rem%k;
//     //     cnt+=rem;
//     //     cout<<rem<<endl;
//     //     return;
//     // }

//     int n = m/k;
//     int rem = m%k;

//     if(n<=ak){
//         if(rem<=a1) cout<<0<<endl;
//         else cout<<rem-a1<<endl;
//     }
//     else{
//         rem=m-ak*k;
//         if(rem<=a1) cout<<rem<<endl;
//         else{
//             rem-=a1;
//             int ans=(rem+k-1)/k;
//             rem=(rem)%k;
//             // ans-=rem;

//             cout<<ans<<endl;
//         }
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int m, k, a1, ak;
//     cin>>m>>k>>a1>>ak;

//     int n = m/k;  

//     auto cost = [&](int x) -> int {
//         int y = m-x*k;
//         return max(0LL, x-ak)+max(0LL, y-a1);
//     };

//     int lo = 0, hi = n;
//     while(hi-lo>2){
//         int m1 = lo+(hi-lo)/3;
//         int m2 = hi-(hi-lo)/3;
//         if(cost(m1)<=cost(m2)) hi=m2;
//         else lo=m1;
//     }

//     int ans = LLONG_MAX;
//     for(int x=lo; x<=hi; x++) ans=min(ans, cost(x));

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
    int m, k, a1, ak;
    cin>>m>>k>>a1>>ak;

    auto cost = [&](int x) -> int {
        int y = m-x*k;
        return max(0LL, x-ak)+max(0LL, y-a1);
    };

    int ans = LLONG_MAX;
    for(int x=0; x<=m/k; x++) ans=min(ans, cost(x));

    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();
    return 0;
}