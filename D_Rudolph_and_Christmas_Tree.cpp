// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, d, h;
//     cin>>n>>d>>h;

//     double A = d*h/2;

//     vector<int> y(n);
//     for(int i=0; i<n; i++) cin>>y[i];

//     int ans=A;
//     for(int i=1; i<n; i++){
//         int dy = y[i]-y[i-1];

//         if(dy>=d) ans+=d;
//         else{
//             ans+=A;
//             ans-=((dy/d)*(dy/d))*A;
//         }
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



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, d, h;
    cin>>n>>d>>h;

    double A = (double)d * h / 2.0;

    vector<int> y(n);
    for(int i=0; i<n; i++) cin>>y[i];

    double ans = A;

    for(int i=1; i<n; i++){
        int dy = y[i] - y[i-1];   

        if(dy >= h){
            ans += A;
        }
        else{
            double overlap = A * (1.0 - (double)dy / h) * (1.0 - (double)dy / h);
            ans += A - overlap;
        }
    }

    cout << fixed << setprecision(7) << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}