// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// // #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int nof=0, nzf=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==0 && b[i]==1) nzf++;
//         if(a[i]==1 && b[i]==0) nof++; 
//     }

//     int nz=0, no=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==0) nz++;
//         else no++;
//     }

//     int nznf=nz-nzf;
//     int nonf=no-nof;

//     // debug(nof);
//     // debug(nzf);

//     if(nof==0 && nzf==0) cout<<0<<endl;
//     else if(nzf && nof==0) cout<<-1<<endl;
//     else if(nzf==0 && nof){
//         if(nof%2){
//             if(nof>1) cout<<2<<endl;
//             else cout<<-1<<endl;
//         }
//         else{
//             if(nof>=6) cout<<2<<endl;
//             else if(nznf>0 && nonf>0) cout<<2<<endl;
//         }
//     }
//     else{
//         nof--;
//         if(nof==0) cout<<1<<endl;
//         if(nof%2){
//             if(nof>1) cout<<2<<endl;
//             else cout<<-1<<endl;
//         }
//         else{
//             if(nof>=6) cout<<3<<endl;
//             else if(nznf>0 && nonf>0) cout<<2<<endl;
//         }
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
// #define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int nof=0, nzf=0;
    for(int i=0; i<n; i++){
        if(a[i]==0 && b[i]==1) nzf++;
        if(a[i]==1 && b[i]==0) nof++; 
    }

    int nz=0, no=0;
    for(int i=0; i<n; i++){
        if(a[i]==0) nz++;
        else no++;
    }

    int nznf=nz-nzf;
    int nonf=no-nof;

    // debug(nof);
    // debug(nzf);

    if(nof==0 && nzf==0) cout<<0<<endl;
    else if(nzf && nof==0){
        if(nznf && nonf) cout<<2<<endl;
        else cout<<-1<<endl;
    }
    else if(nzf==0 && nof){
        if(nof%2){
            if(nof>1) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else{
            if(nof>=6) cout<<2<<endl;
            else if(nznf>0 && nonf>0) cout<<2<<endl;
        }
    }
    else{
        if(nof%2) cout<<1<<endl;
        else if(nzf%2==0) cout<<2<<endl;
        else{
            if(nznf>2) cout<<2<<endl;
            else cout<<-1<<endl;
        }
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// // #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int nof=0, nzf=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==0 && b[i]==1) nzf++;
//         if(a[i]==1 && b[i]==0) nof++; 
//     }

//     int nz=0, no=0;
//     for(int i=0; i<n; i++){
//         if(a[i]==0) nz++;
//         else no++;
//     }

//     int nznf=nz-nzf;
//     int nonf=no-nof;

//     // debug(nof);
//     // debug(nzf);

//     if(nof==0 && nzf==0) {
//         cout<<0<<endl;
//     }
//     else if(no==0) {
//         cout<<-1<<endl;
//     }
//     else {
//         if(nof%2) cout<<1<<endl;
//         else cout<<2<<endl;
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