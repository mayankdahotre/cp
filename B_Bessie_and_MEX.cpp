// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     vector<int> v(n);

//     int x=0;
//     for(int i=0; i<n; i++) if(a[i]==1) { v[i]=x; x++; }

//     for(int i=0; i<n; i++) if(a[i]>1) { v[i]=x; x++; }

//     for(int i=0; i<n; i++) if(a[i]<1) { v[i]=x; x++; }

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

// void solve() {
//     int n; cin>>n;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     int x=0;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         if(a[i]>0){
//             v[i]=x;
//             x++;
//         }
//         else{
//             v[i]=x-a[i];
//         }
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

void solve() {
    int n; cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int mex=0;
    set<int> seen;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        if(a[i]<0) v[i] = mex - a[i];
        else { v[i] = mex; mex++; }
        seen.insert(v[i]);
        while(seen.count(mex)) mex++;
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