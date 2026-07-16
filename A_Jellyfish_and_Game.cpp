// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m, k;
//     cin>>n>>m>>k;

//     vector<int> a(n), b(m);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<m; i++) cin>>b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     int mn1 = *min_element(a.begin(), a.end());
//     int mn2 = *min_element(b.begin(), b.end());

//     int mx1 = *max_element(a.begin(), a.end());
//     int mx2 = *max_element(b.begin(), b.end());

//     if(mn1<=mn2){
//         if(mx1<=mx2){
//             if(k%2) swap(a[0], b[m-1]);
//             int sum=0;
//             for(int i=0; i<n; i++) sum+=a[i];
//             cout<<sum<<endl;
//             return;
//         }
//         else{
//             swap(a[0], b[m-1]);
//             // k--;
//             if(k%2) swap(b[m-1], a[n-1]);
//             int sum=0;
//             for(int i=0; i<n; i++) sum+=a[i];
//             cout<<sum<<endl;
//             return;
//         }
//     }
//     else{
//         if(mx1<=mx2){
//             if(k%2) swap(a[0], b[m-1]);
//             int sum=0;
//             for(int i=0; i<n; i++) sum+=a[i];
//             cout<<sum<<endl;
//             return;
//         }
//         else{
//             swap(a[0], b[m-1]);
//             if(k%2==0) swap(b[0], a[n-1]);
//             int sum=0;
//             for(int i=0; i<n; i++) sum+=a[i];
//             cout<<sum<<endl;
//             return;
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

void solve() {
    int n, m ,k;
    cin>>n>>m>>k;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    int sum1=0;
    auto mna = *min_element(a.begin(), a.end());
    auto mxb = *max_element(b.begin(), b.end());
    if(mna<mxb) swap(*min_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));
    for(int i=0; i<n; i++) sum1+=a[i];

    int sum2=0;
    auto mnb = *min_element(b.begin(), b.end());
    auto mxa = *max_element(a.begin(), a.end());
    if(mnb<mxa) swap(*min_element(b.begin(), b.end()), *max_element(a.begin(), a.end()));
    for(int i=0; i<n; i++) sum2+=a[i];

    if(k%2) cout<<sum1<<endl;
    else cout<<sum2<<endl;

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