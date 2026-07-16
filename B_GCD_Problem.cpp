// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             int c = (n-i)/i;

//             for(int j=2; j*j<=c; j++){
//                 int b = j;
//                 int a = c-j;

//                 if(__gcd(a,b)==1){
//                     cout<<a*i<<" "<<b*i<<" "<<i<<endl;
//                     return;
//                 }
//             }
//         }
//     }
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
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int rem = n - i;
            if (rem % i == 0) {
                int c = rem / i;

                for (int j = 1; j < c; j++) {
                    int b = j;
                    int a = c - j;

                    if (__gcd(a, b) == 1) {
                        int x = a * i;
                        int y = b * i;
                        
                        if (x != y && y != i && x != i) {
                            cout << x << " " << y << " " << i << "\n";
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << -1 << "\n";
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