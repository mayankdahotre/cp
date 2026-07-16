// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n,0);
//     int j=1;
//     for(int i=k-1; i<=n-k; i++){
//         v[i]=j;
//         j++;
//     }
//     // debugv(v);
//     for(int i=0; i<k-1; i++){
//         v[i]=j;
//         j++;
//     }
//     // debugv(v);
//     for(int i=n-k+1; i<n; i++){
//         v[i]=j;
//         j++;
//     }

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n,0);
    int j=1;
    for(int i=k-1; i<n; i+=k){
        v[i]=j;
        j++;
    }
    
    for(int i=0; i<n; i++){
        if(!v[i]){
            v[i]=j;
            j++;
        }
    }

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
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