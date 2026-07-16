// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> a(n,vector<int> (m,0));

//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>a[i][j];
//             sum+=a[i][j];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(i==0){
//                 if(j==0){
//                     if(a[i+1][j]==0 && a[i][j+1]==0) sum-=a[i][j];
//                 }
//                 if(j==m-1){
//                     if(a[i][j-1]==0 && a[i+1][j]==0) sum-=a[i][j];
//                 }
//                 else{
//                     if(a[i][j-1]==0 && a[i+1][j]==0 && a[i][j+1]==0) sum-=a[i][j];
//                 }
//             }
//             if(i==n-1){
//                 if(j==0){
//                     if(a[i][j+1]==0 && a[i-1][j]==0) sum-=a[i][j];
//                 }
//                 if(j==m-1){
//                     if(a[i][j-1]==0 && a[i-1][j]==0) sum-=a[i][j];
//                 }
//                 else{
//                     if(a[i][j-1]==0 && a[i-1][j]==0 && a[i][j+1]==0) sum-=a[i][j];
//                 }
//             }
//             else{
//                 if(j==0){
//                     if(a[i-1][j]==0 && a[i+1][j]==0 && a[i][j+1]==0) sum-=a[i][j];
//                 }
//                 if(j==m-1){
//                     if(a[i-1][j]==0 && a[i+1][j]==0 && a[i][j-1]==0) sum-=a[i][j];
//                 }
//                 else{
//                     if(a[i-1][j]==0 && a[i+1][j]==0 && a[i][j-1]==0 && a[i][j+1]==0) sum-=a[i][j];
//                 }
//             }
//         }
//     }

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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m, 0));
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool canRemove = false;
            
            if (i == 0) {
                if (j == 0) {
                    if (a[i + 1][j] == 0 && a[i][j + 1] == 0) canRemove = true;
                }
                if (j == m - 1) {
                    if (a[i][j - 1] == 0 && a[i + 1][j] == 0) canRemove = true;
                } else {
                    if (a[i][j - 1] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0) canRemove = true;
                }
            }

            if (i == n - 1) {
                if (j == 0) {
                    if (a[i][j + 1] == 0 && a[i - 1][j] == 0) canRemove = true;
                }
                if (j == m - 1) {
                    if (a[i][j - 1] == 0 && a[i - 1][j] == 0) canRemove = true;
                } else {
                    if (a[i][j - 1] == 0 && a[i - 1][j] == 0 && a[i][j + 1] == 0) canRemove = true;
                }
            } else {
                if (j == 0) {
                    if (a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0) canRemove = true;
                }
                if (j == m - 1) {
                    if (a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j - 1] == 0) canRemove = true;
                } else {
                    if (a[i - 1][j] == 0 && a[i + 1][j] == 0 && a[i][j - 1] == 0 && a[i][j + 1] == 0) canRemove = true;
                }
            }

            if (canRemove) sum -= a[i][j];
        }
    }

    cout << sum << endl;
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
