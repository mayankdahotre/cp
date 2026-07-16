// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     if(n==1 || k==1){
//         cout<<"YES"<<endl;
//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=k; j++){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     if(n%2 || k%2){
//         cout<<"NO"<<endl;
//         return;
//     }
//     else{
//         int num = 1;
//         vector<vector<int>> v(n,vector<int>(k,0));
//         for(int i=0; i<k; i++){
//             for(int j=0; j<n; j++){
//                 v[j][i]=num;
//                 num++;
//             }
//         }

//         for(int i=0; i<n; i++){
//             for(int j=0; j<k; j++){
//                 cout<<v[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         return;
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

void solve() {
    int n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++) {
             cout << i << endl;
        }
        return;
    }

    if (n % 2) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    int num = 1;
    vector<vector<int>> v(n, vector<int>(k, 0));
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            v[j][i] = num;
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
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
