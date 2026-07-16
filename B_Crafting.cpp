// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;
//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     for(int i=0; i<n; i++){
//         if(a[i]>=b[i]) continue;
//         for(int j=0; j<n; j++){
//             if(i!=j){
//                 if(a[j]-b[j]<a[i]-b[i]){
//                     cout<<"NO"<<endl;
//                     return;
//                 }
//             }
//         }

//         for(int j=0; j<n; j++){
//             if(i!=j) a[j]-=b[i]-a[i];

//             cout<<a[i]<<" ";

//             if(a[i]<0){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++){
//         if(a[i]<b[i] || a[i]<0){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }

//     cout<<"YES"<<endl;
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

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int less=0;
//     int li=-1;
//     for(int i=0; i<n; i++){
//         if(a[i]<b[i]){
//             less++;
//             li=i;
//         }
//     }

//     if(less>1){
//         cout<<"NO"<<endl;
//         return;
//     }

//     int mnd=INT_MAX;
//     for(int i=0; i<n; i++){
//         if(i!=li) mnd=min(mnd, a[i]-b[i]);
//     }

//     if(mnd>=b[li]-a[li]){
//         cout<<"YES"<<endl;
//         return;
//     }

//     cout<<"NO"<<endl;
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
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    int less = 0;
    int li = -1;

    for(int i=0; i<n; i++){
        if(a[i] < b[i]){
            less++;
            li = i;
        }
    }

    if(less > 1){
        cout << "NO" << endl;
        return;
    }

    if(less == 0){
        cout << "YES" << endl;
        return;
    }

    int mnd = LLONG_MAX;

    for(int i=0; i<n; i++){
        if(i != li)
            mnd = min(mnd, a[i] - b[i]);
    }

    if(mnd >= b[li] - a[li]){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}