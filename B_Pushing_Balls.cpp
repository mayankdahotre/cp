// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v;
//     for(int i=0; i<n; i++){
//         string s;
//         cin>>s;

//         for(auto i:s){
//             int c = (int)(s[i]-'0');
//             v[i].push_back(c);
//         }
//     }

//     bool b = true;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(i>0 && j>0 && v[i][j]==1){
//                 for(int k=0; k<i; k++) if(v[k][j]!=1) b = false;
//                 for(int k=0; k<j; k++) if(v[i][k]!=1) b = false;
//             } 
//         }
//     }

//     if(b){
//         cout<<"YES"<<endl;
//         return;
//     }
//     else{
//         cout<<"NO"<<endl;
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

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            v[i][j] = s[j] - '0';
        }
    }

    bool isValid = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 1) {
                bool r1 = false, c1 = false;
                
                if(i>=0) for (int k = 0; k < i; k++){
                    if (v[k][j] == 1) r1 = true;
                    else break;
                }

                if(j>=0) for (int k = 0; k < j; k++){
                    if (v[i][k] == 1) c1 = true;
                    else break;
                }

                if (!r1 && !c1 && (i > 0 && j > 0)) {
                    isValid = false;
                    break;
                }
                
            }
        }
        if (!isValid) break;
    }

    cout << (isValid ? "YES" : "NO") << endl;
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
