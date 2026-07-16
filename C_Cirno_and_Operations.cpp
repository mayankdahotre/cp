// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int sum = 0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     if(n==1){
//         cout<<sum<<endl;
//         return;
//     }

//     int cur=abs(v[n-1]-v[0]);
//     for(int i=1; i<n; i++){
//         for(int j=0; j<n-i; j++) v[j]=v[j+1]-v[j];
//         cur=max(cur, abs(v[n-i]-v[0]));
//     }
//     cur = max(sum,abs(v[n-1]-v[0]));

//     cout<<cur<<endl;
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

    int sum = 0;
    for(int i=0; i<n; i++) sum+=v[i];

    if(n==1){
        cout<<sum<<endl;
        return;
    }

    int cur=abs(v[n-1]-v[0]);

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++) v[j]=v[j+1]-v[j];
        cur=max(cur, abs(v[n-i-1]-v[0]));
    }

    cur = max(cur, sum); 

    cout<<cur<<endl;
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