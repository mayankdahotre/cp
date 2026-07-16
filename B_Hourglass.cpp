// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int s,k,m;
//     cin>>s>>k>>m;

//     if(s==k){
//         if(m<s) cout<<s-m<<endl;
//         else if(m==s) cout<<s<<endl;
//         else cout<<s-(m%s)<<endl;
//     }
//     else{
//         int mn = min(s,k);
//         int mx= max(s,k);

//         if(m<mn){
//             if(s==mn) cout<<s-m<<endl;
//             else cout<<s-m<<endl;
//         }
//         else if(m==mn){
//             if(s==mn) cout<<0<<endl;
//             else cout<<k<<endl;
//         }
//         else if(m<mn && m<mx){
//             if(s==mn) cout<<s-(m%k)<<endl;
//             else cout<<((m/k)+1)*k-m<<endl;
//         }
//         else if(m==mx){
//             if(s==mn) cout<<s<<endl; 
//             else cout<<((m/k)+1)*k-m<<endl;
//         }
//         else{
//             if(s==mn) cout<<max(0LL,mn-m%k)<<endl;
//             else cout<<k-(m%k)<<endl;
//         }
//     }

//     // if(m<min(s,k)) cout<<s-m<<endl;
//     // else if(m==min(s,k)){
//     //     if(s==min(s,k)) cout<<0<<endl;
//     //     else cout<<k-m%k<<endl;
//     // }
//     // else if(min(s,k)<m && m<max(s,k)){
//     //     if(s<k) cout<<0<<endl;
//     //     else cout<<k-(m%k)<<endl;
//     // }
//     // else if(m==max(s,k)){
//     //     if(s==max(s,k)) cout<<k-m%k<<endl;
//     //     else cout<<s<<endl;
//     // }
//     // else cout<<max(0LL,min(s,k)-m%k)<<endl;

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
    int s,k,m;
    cin>>s>>k>>m;

    if(s<=k) cout<<max(0LL,s-(m%k))<<endl;
    else{
        if(m%(2*k)<k) cout<<s-(m%k)<<endl;
        else cout<<k-(m%k)<<endl;
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