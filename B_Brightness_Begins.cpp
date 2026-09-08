// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// int nf(int n){
//     int x=0;
//     for(int i=1; i*i<=n; i++){
//         if(n%i==0){
//             if(i==n/i) x++;
//             else x+=2;
//         }
//     }

//     return x;
// }

// void solve() {
//     int k;
//     cin>>k;

//     int i=1; 
//     int x=0;
//     while(x<k){
//         if(nf(i)%2==0) x++;
//         i++;
//     }

//     i--;
//     cout<<i<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin>>T;

//     while(T--) solve();

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

int nf(int n){
    int x=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(i==n/i) x++;
            else x+=2;
        }
    }

    return x;
}

void solve() {
    int k;
    cin>>k;

    int ans=0;

    int l=1, r=2*k;
    while(l<=r){
        int m = l+(r-l)/2;

        if(m - (int)sqrtl(m) >= k){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;

    while(T--) solve();

    return 0;
}