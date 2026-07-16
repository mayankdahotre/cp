#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    // debug(x);
    // debugv(v);

    int ans=0;
    int mx = *max_element(v.begin(), v.end());

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];

    ans = max(mx, (sum+x-1)/x);

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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, x;
//     cin >> n >> x;

//     priority_queue<int> pq;

//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         pq.push(a);
//     }

//     int ans = 0;

//     while (!pq.empty()) {
//         vector<int> temp;

//         for (int i = 0; i < x && !pq.empty(); i++) {
//             int cur = pq.top();
//             pq.pop();

//             cur--;

//             if(cur>0) temp.push_back(cur);
//         }

//         for(int val: temp) pq.push(val);

//         ans++;
//     }

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--) {
//         solve();
//     }

//     return 0;
// }