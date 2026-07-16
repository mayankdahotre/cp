// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     int v=n;
//     int sum=0;
//     int a=n/x;
//     int b=n/y;
//     int h = x*y/__gcd(x,y);
//     int c = n/h;

//     // for(int i=0; i<max(a-c,0LL); i++){
//     //     sum+=n;
//     //     n--;
//     // }

//     sum+=n*(n+1)/2;
//     sum-=(n-a+c)/(n-a+c+1)/2;

//     // for(int i=0; i<max(b-c,0LL); i++){
//     //     sum-=i+1;
//     // }

//     sum-=(b-c+1)*(b-c+2)/2;

//     cout<<sum<<endl;
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
    int n,x,y;
    cin>>n>>x>>y;

    int a = n/x;
    int b = n/y;
    int l = x*y/__gcd(x,y);
    int c = n/l;

    int good = a - c;
    int bad = b - c;

    int sum = 0;

    sum += n*(n+1)/2 - (n-good)*(n-good+1)/2;

    sum -= bad*(bad+1)/2;

    cout<<sum<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}