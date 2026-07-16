// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m2;
//     cin>>n>>m2;

//     vector<vector<int>> v(n, vector<int> (m2,0));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m2; j++){
//             cin>>v[i][j];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m2; j++){
//             int m = v[i][j];
//             if(i<n-1) m = min(v[i+1][j],m);
//             if(j<m2-1) m = min(v[i][j+1],m);
//             if(v[i][j]>m) v[i][j]=m;
//             int x = v[i][j];
//             if(i>0) x = min(v[i-1][j],x);
//             if(j>0) x = min(v[i][j-1],x);
//             if(v[i][j]>m) v[i][j]=m;
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int max_adj = 0;
            
            if (i + 1 < n) max_adj = max(max_adj, v[i + 1][j]);
            if (j + 1 < m) max_adj = max(max_adj, v[i][j + 1]);
            if (i > 0) max_adj = max(max_adj, v[i - 1][j]);
            if (j > 0) max_adj = max(max_adj, v[i][j - 1]);

            if (v[i][j] > max_adj) v[i][j] = max_adj; 
            
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
