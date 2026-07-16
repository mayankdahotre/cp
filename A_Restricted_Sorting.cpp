// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(is_sorted(v.begin(), v.end())){
//         cout<<-1<<endl;
//         return;
//     }

//     vector<int> v2 = v;
//     sort(v2.begin(), v2.end());

//     int ans=0;
//     for(int i=0; i<n; i++) ans=max(ans, abs(v[i]-v2[i]));

//     cout<<ans<<endl;
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
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(is_sorted(v.begin(), v.end())){
        cout<<-1<<endl;
        return;
    }

    int ans=0;
    for(int i=n-1; i>=0; i--){
        auto mxp = max_element(v.begin(), v.begin()+i+1); // fix
        int mxi = mxp - v.begin(); // fix

        ans = max(ans, abs(v[mxi]-v[i]));

        swap(v[mxi], v[i]);
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