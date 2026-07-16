// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int f(int x){
//     int curr =1;
//     while(curr<=x){
//         curr*=2;
//     }
//     return curr;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     cout<<n<<endl;

//     for(int i=0; i<n; i++){
//         cin>>v[i];
//         cout<<i<<" "<<f(v[i])-v[i]<<endl;
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


#include <bits/stdc++.h>
using namespace std;

#define int long long

int f(int x) {
    int cur = 1;
    while (cur <= x) {
        cur *= 2;
    }
    return cur;
}

void solve() {
    int n;
    cin >> n;
    cout << n << "\n";

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cout << i << " " << f(x) - x << "\n";
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
