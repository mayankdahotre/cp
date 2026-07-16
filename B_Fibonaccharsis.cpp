// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(k);
//     v[0]=1;
//     v[1]=1;

//     for(int i=2; i<k; i++) v[i]=v[i-1]+v[i-2];

//     int ans=0;
//     int a0=-1;
//     for(int a=0; a<=n/v[k-2]; a++){
//         if((n-a*v[k-2])%v[k-1]==0) ans++;
//     }

//     cout<<ans<<endl;
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
    int n,k;
    cin>>n>>k;

    vector<int> v;
    v.push_back(1);
    v.push_back(1);

    while(v.back() <= n){
        v.push_back(v[v.size()-1] + v[v.size()-2]);
    }

    if(k-1 >= v.size()){
        cout<<0<<endl;
        return;
    }

    int f1 = v[k-2];
    int f2 = v[k-1];

    int ans = 0;

    for(int a=0; a*f1 <= n; a++){
        int rem = n - a*f1;
        if(rem % f2 == 0){
            ans++;   
        }
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}