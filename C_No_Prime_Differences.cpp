// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<vector<int>> v(n, vector<int>(m));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             v[i][j]=1+j+i*m;
//         }
//     }

//     vector<int> ord;
//     for(int i=0; i<n; i+=2) ord.push_back(i);
//     for(int i=1; i<n; i+=2) ord.push_back(i);

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<v[ord[i]][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;


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


bool isp(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            v[i][j]=1+j+i*m;
        }
    }

    int mul = m;
    for(int i=0; i<m; i++){
        if(!isp(m-i) && !isp(2*m-i)){
            mul=i;
            break;
        }
    }

    for(int i=0; i<n; i++){      
        int k = (mul * i) % m;
        reverse(v[i].begin(), v[i].end());
        reverse(v[i].begin(), v[i].begin() + k);
        reverse(v[i].begin() + k, v[i].end());
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

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