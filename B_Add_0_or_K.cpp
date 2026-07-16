// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(k%2){
//         for(int i=0; i<n; i++) if(v[i]%2) v[i]+=k;
//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;
//         return;
//     }
//     else{
//         int e=0;
//         for(int i=0; i<n; i++) if(v[i]%2==0) e++;

//         if(e==n){
//             for(int i=0; i<n; i++) cout<<v[i]<<" ";
//             cout<<endl;
//             return;
//         }
//     }

//     set<int> s(v.begin(), v.end());
//     int x;
//     while(auto i: s){
//         if(k%i){
//             x=i;
//             break;
//         }
//     }

//     for(int i=0; i<n; i++){
//         while(v[i]%x) v[i]+=k;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(k%2){
//         for(int i=0; i<n; i++) if(v[i]%2) v[i]+=k;

//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;
//         return;
//     }

//     int e=0;
//     for(int i=0; i<n; i++) if(v[i]%2==0) e++;

//     if(e==n){
//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;
//         return;
//     }

//     set<int> s(v.begin(), v.end());

//     int x=3;
//     while(k%x==0) x++;

//     for(int i=0; i<n; i++){
//         while(v[i]%x) v[i]+=k;
//     }

//     // int x=-1;

//     // for(auto i:s){
//     //     if(i!=0 && k%i){
//     //         x=i;
//     //         break;
//     //     }
//     // }

//     // if(n==1){
//     //     cout<<v[0]+k<<endl;
//     //     return;
//     // }

//     // if(x==-1){
//     //     for(int i=0; i<n; i++) cout<<v[i]+k<<" ";
//     //     cout<<endl;
//     //     return;
//     // }

//     // for(int i=0; i<n; i++){
//     //     int cnt=0;

//     //     while(v[i]%x && cnt<=k){
//     //         v[i]+=k;
//     //         cnt++;
//     //     }
//     // }

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
//     cout<<endl;
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
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

bool prime(int x){
    if(x < 2) return false;

    for(int i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }

    return true;
}

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(n==1){
        if(v[0]==1) v[0]+=k;
        cout<<v[0]<<endl;
        return;
    }

    if(k%2){
        for(int i=0; i<n; i++){
            if(v[i]%2) v[i]+=k;
        }

        for(int i=0; i<n; i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }

    int e=0;
    for(int i=0; i<n; i++){
        if(v[i]%2==0) e++;
    }

    if(e==n){
        for(int i=0; i<n; i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }

    int x=2;

    while(true){
        if(prime(x) && k%x) break;
        x++;
    }

    for(int i=0; i<n; i++){
        int cnt=0;

        while((v[i]+cnt*k)%x) cnt++;

        v[i]+=cnt*k;
    }

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
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