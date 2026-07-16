// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define yes { cout << "YES" << endl; return; }
// #define no { cout << "NO" << endl; return; }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> d(n-1);
//     for(int i=0; i<n-1; i++) d[i]=v[i+1]-v[i];

//     int fall=0;
//     for(int i=0; i<n-1; i++){
//         if(d[i]<0) fall++;
//         if(d[i]<0 && d[i+1]<0 && i<n-2){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }

//     if(fall==1){
//         cout<<"YES"<<endl;
//         return;
//     }

//     int l=0, r=0;
//     for(int i=0; i<n-1; i++){
//         if(d[i]<0){
//             if(abs(d[i])>d[i+1]){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }

//         if(d[i]<0 && i!=n-1){
//             l=max(l, abs(d[i]));
//             r=min(r, d[i+1]);
//         }
//         if(i==n-1 && d[i]<0) l=max(l,abs(d[i]));
//     }

//     if(l>r){
//         cout<<"NO"<<endl;
//         return;
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






#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define yes { cout << "YES" << endl; return; }
#define no { cout << "NO" << endl; return; }

void solve() {

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    int l=0, r=1e18;

    for(int i=0; i<n-1; i++){

        int d=v[i+1]-v[i];

        if(d<0){

            l=max(l, -d);

            if(i+1<n-1){
                r=min(r, v[i+2]-v[i+1]);
            }
        }
    }

    if(l<=r) yes
    else no
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