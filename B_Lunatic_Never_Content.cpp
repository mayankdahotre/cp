// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool checkpalin(vector<int> &a){
//     int n = a.size();
//     for(int i = 0; i < n / 2; i++){
//         if(a[i] != a[n - 1 - i])
//             return false;
//     }
//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;
    
//     vector<int> a(n);
//     for(int i = 0; i < n; i++) cin >> a[i];

//     int mx = *max_element(a.begin(), a.end());
//     int j = mx-1;

//     while(j > 0){
//         vector<int> b(n);
//         for(int i = 0; i < n; i++)
//             b[i] = a[i] % j;

//         if(checkpalin(b)) j--;
//         else break;
//     }

//     cout << j << endl;
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
    int ans=0;
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        ans = __gcd(ans, abs(a[i]-a[n-1-i]));
    }

    cout<<ans<<endl;
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