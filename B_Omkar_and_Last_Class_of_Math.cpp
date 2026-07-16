// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     int a=n/2;
//     int b=n-a;

//     int g=1;
//     for(int i=n/2; i>0; i--){
//         if(a*b/g>i*(n-i)/__gcd(i,n-i)){
//             g=__gcd(i,n-i);
//             a=i;
//             b=n-i;
//             break;
//         }
//     }

//     cout<<a<<" "<<b<<endl;
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
    int n;
    cin>>n;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }


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