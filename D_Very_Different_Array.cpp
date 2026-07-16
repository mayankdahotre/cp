// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<int> a(n), b(m);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<m; i++) cin>>b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end(), greater<int>());

//     int i=0, j=m-1;

//     int sum=0;
//     for(int k=0; k<n; k++){
//         bool ig = (abs(a[k]-b[i]))>(abs(a[k]-b[j]));
//         if(ig){
//             sum+=abs(a[k]-b[i]);
//             i++;
//         }
//         else{
//             sum+=abs(a[k]-b[j]);
//             j--;
//         }
//     }

//     cout<<sum<<endl;
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
    int n, m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int lo=0, hi=n-1;
    int p=0, q=m-1;

    int sum=0;
    while(lo<=hi){
        int diff_lo = abs(a[lo] - b[q]);
        int diff_hi = abs(a[hi] - b[p]);
        if(diff_lo > diff_hi){
            sum += diff_lo;
            lo++; q--;
        } else {
            sum += diff_hi;
            hi--; p++;
        }
    }

    cout<<sum<<endl;
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