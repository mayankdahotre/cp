// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n-1);
//     for(int i=0; i<n-1; i++) cin>>v[i];

//     vector<int> p;
//     p.push_back(v[0]);
//     for(int i=0; i<n-2; i++) p.push_back(v[i+1]-v[i]);

//     // for(int i=0; i<p.size(); i++) cout<<p[i]<<" ";
//     // cout<<endl;

//     int sum1 = (n+1)*(n)/2;
//     // int sum2 = (n+1)*(n+2)/2;

//     vector<int> f(n+1,0);
//     for(int i=0; i<n; i++) if(p[i]<=n) f[p[i]]++;

//     int miss = 0;
//     for(int i=1; i<=n; i++) if(!f[i]) miss+=i;

//     int sum=0;
//     for(int i=0; i<(int)p.size(); i++) sum+=p[i];

//     if(f[1]==2 || f[2]==2){
//         cout<<"NO"<<endl;
//         return;
//     }

//     // for(int i=1; i<=n; i++) {
//     //     if(sum+2*i==sum1){
//     //         cout<<"YES"<<endl;
//     //         return;
//     //     }
//     // }

//     if(sum1==sum+miss || sum==sum1){
//         cout<<"YES"<<endl;
//         return;
//     }
    
//     cout<<"NO"<<endl;
//     return;
// }

// // void solve() {
// //     int n;
// //     cin>>n;

// //     vector<int> v(n-1);
// //     for(int i=0; i<n-1; i++) cin>>v[i]; // fixed

// //     vector<int> p;
// //     p.push_back(v[0]);
// //     for(int i=0; i<n-2; i++) p.push_back(v[i+1]-v[i]);

// //     int sum = (n+1)*(n)/2;

// //     for(int i=0; i<(int)p.size(); i++) sum-=p[i]; // fixed

// //     if(sum) cout<<"NO"<<endl;
// //     else cout<<"YES"<<endl;
// // }

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

    vector<int> v(n-1);
    for(int i=0; i<n-1; i++) cin>>v[i];

    vector<int> p;
    p.push_back(v[0]);
    for(int i=0; i<n-2; i++) p.push_back(v[i+1]-v[i]);

    int sum1 = (n+1)*(n)/2;

    vector<int> f(n+1,0);
    for(int i=0; i<(int)p.size(); i++) if(p[i]<=n) f[p[i]]++; // fixed

    int miss = 0;
    for(int i=1; i<=n; i++){
        if(!f[i]) miss+=i;
        if(f[i]>2){
            cout<<"NO"<<endl;
            return;
        }
    }

    int sum=0;
    for(int i=0; i<(int)p.size(); i++) sum+=p[i];

    if(f[1]==2 || f[2]==2){
        cout<<"NO"<<endl;
        return;
    }

    if(sum1==sum+miss || sum==sum1){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}