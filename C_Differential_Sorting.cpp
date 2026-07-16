// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(v[n-2]>v[n-1]){
//         cout<<-1<<endl;
//         return;
//     }

//     int cnt=0;
//     vector<vector<int>> ans;
//     for(int i=n-3; i>=0; i--){
//         if(v[i]<=v[i+1]) continue;
//         else{
//             v[i]=v[i+1]-v[i+2];
//             cnt++;
//             ans.push_back({i+1,i+2, i+3});

//         }
//     }

//     cout<<cnt<<endl;
//     for(auto t: ans){
//         cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
//     }
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
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(v[n-2]>v[n-1]){
        cout<<-1<<endl;
        return;
    }

    if(v[n-1]<0){
        if(is_sorted(v.begin(), v.end())){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else{
        cout<<n-2<<endl;
        for(int i=n-3; i>=0; i--) cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }
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