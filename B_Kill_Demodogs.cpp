// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin>>n;

//     long long ans = 0;
//     long long i=1,j=1;
//     for(int k=0; k<n; k++){
//         ans+=i*j;
//         i++;
//         ans+=i*j;
//         j++;
//     }
//     ans+=1LL*n*n;

//     ans*=2022;

//     ans%=1000000007;

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

long long n1 = 1000000007;

void solve() {
    long long n;
    cin>>n;
    long long ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<ans<<endl;
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
