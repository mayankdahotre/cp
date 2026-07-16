// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int num=0;
//     vector<int> v2(n);
//     int maxn = 0;
//     for(int i=0; i<n; i++){
//         v2[i]=*max_element(v.begin(), v.begin()+i+1)-v[i];
//         num+=v2[i];
//         maxn = max(maxn, v2[i]);
//     }

//     num+=maxn;
//     cout<<num<<endl;
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
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int num = 0, maxn = 0;
    int max_so_far = 0;  
    
    for (int i = 0; i < n; i++) {
        max_so_far = max(max_so_far, v[i]); 
        int diff = max_so_far - v[i]; 
        num += diff;
        maxn = max(maxn, diff);
    }

    num += maxn;
    cout << num << endl;
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
