// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     map<int,int> m;
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         m[x]++;

//         if(m[0]>=3 && m[1]>=1 && m[2]>=2 && m[5]>=1 && m[3]>=1){
//             cout<<i+1<<endl;
//             return;
//         }
//     }

//     cout<<0<<endl;
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

    map<int, int> m;
    int idx = 0; 

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;

        if (m[0] >= 3 && m[1] >= 1 && m[2] >= 2 && m[3] >= 1 && m[5] >= 1) {
            if (idx == 0) {  
                idx = i + 1;
            }
        }
    }

    cout << idx << endl;
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
