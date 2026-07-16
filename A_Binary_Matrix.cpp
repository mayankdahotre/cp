// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool row(vector<vector<int>> &v, int i, int &n, int &m){
//     int num=0;
//     for(int j=0; j<m; j++){
//         if(v[i][j]==1) num++;
//     }
//     return !(num%2);
// }

// bool col(vector<vector<int>> &v, int j){
//     int num=0;
//     for(int i=0; i<n; i++){
//         if(v[i][j]==1) num++;
//     }
//     return !(num%2);
// }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v(n, vector<int>(m,-1));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>v[i][j];
//         }
//     }

//     int no = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(row(v,i,n,m) || col(v,j,n,m)){
//                 no++;
//             }
//         }
//     }

//     cout<<no/2<<endl;
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


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool row(vector<vector<int>> &v, int i, int m) {
//     int num = accumulate(v[i].begin(), v[i].end(), 0);
//     return !(num % 2);
// }

// bool col(vector<vector<int>> &v, int j, int n) {
//     int num = 0;
//     for (int i = 0; i < n; i++) {
//         num += v[i][j];
//     }
//     return !(num % 2);
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n, vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> v[i][j];
//         }
//     }

//     double no = 0;
//     map<int,int> x,y;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row(v, i, m)){
//                 x[i]++;
//             }
//             if(col(v,j,n)){
//                 y[j]++;
//             }
//         }
//     }
    
//     for(auto i: x){
//         i.second/=n;
//         if(i.second) no++;
//     }

//     for(auto i: y){
//         i.second/=m;
//         if(i.second) no++;
//     }

//     cout << no/2 << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int T;
//     cin >> T;
//     while (T--) solve();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n, vector<int>(m));
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>v[i][j];
//         }
//     }
    
//     vector<int> rXOR(n, 0), cXOR(m, 0);
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             rXOR[i] ^= v[i][j];
//             cXOR[j] ^= v[i][j];
//         }
//     }
    
//     int ri = 0, ci = 0;
//     for (int i = 0; i < n; i++) ri += rXOR[i];
//     for (int j = 0; j < m; j++) ci += cXOR[j];
    
//     cout<<max(ri, ci)<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    
    for(int i = 0; i < n; i++){
        string r;
        cin >> r;  
        for(int j = 0; j < m; j++){
            v[i][j] = r[j] - '0'; 
        }
    }
    
    vector<int> rXOR(n, 0), cXOR(m, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rXOR[i] ^= v[i][j];
            cXOR[j] ^= v[i][j];
        }
    }
    
    int ri = 0, ci = 0;
    for (int i = 0; i < n; i++) ri += rXOR[i];
    for (int j = 0; j < m; j++) ci += cXOR[j];
    
    cout << max(ri, ci) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}