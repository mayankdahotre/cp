// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int i=n-1;
//     int prev = v[i];
//     int num=0;
//     while(i>0){
//         if(prev=0){
//             cout<<-1<<endl;
//             return;
//         }
//         while(prev>v[i-1]){
//             v[i-1]/=2;
//             num++;
//         }
//         prev = v[i-1];
//         i--;
//     }

//     cout<<num<<endl;
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
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int operations = 0;
    for (int i = n - 2; i >= 0; i--) {
        while (v[i] >= v[i + 1] && v[i] > 0) {
            v[i] /= 2;
            operations++;
        }
        if (v[i] == 0 && v[i] >= v[i + 1]) {
            cout << -1 << endl;
            return;
        }
    }

    cout << operations << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
