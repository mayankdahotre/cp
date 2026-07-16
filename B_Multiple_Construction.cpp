// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(2*n,-1);
//     int i=2, j=n;

//     if(n==1) cout<<1<<" "<<1<<endl;

//     // if(n==2) cout<<2<<

//     while(i<=j){
//         auto it = find(v.begin(), v.end(), -1);
//         int idx = it - v.begin();
//         v[idx]=i;
//         v[idx+i]=i;
//         i++;

//         if(i<=j){
//             auto it = find(v.begin(), v.end(), -1);
//             int idx = it - v.begin();
//             v[idx]=j;
//             v[idx+j]=j;
//             j--;
//         }

//         for(int i=0; i<2*n; i++) if(v[i]==-1) v[i]=1;

//         for(int i=0; i<2*n; i++) cout<<v[i]<<" ";
//         cout<<endl;
//         // cout<<endl;

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
    int n;
    cin>>n;

    cout<<n<<" ";
    for(int i=n-1; i>=1; i--) cout<<i<<" ";
    cout<<n<<" ";
    for(int i=1; i<=n-1; i++) cout<<i<<" ";
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