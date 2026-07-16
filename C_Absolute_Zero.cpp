// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     if(v[0]==v[n-1]){
//         if(v[0]==0){
//             cout<<0<<endl;
//             cout<<endl;
//             return;
//         }
//         else{
//             cout<<1<<endl;
//             cout<<v[0]<<endl;
//             return;
//         }
//     }

//     vector<int> ans;
//     for(int i=0; i<n-1; i++){
//         int d=v[i+1]+v[i];
//         if(d%2){
//             cout<<-1<<endl;
//             return;
//         }
//         else if(d){
//             ans.push_back(d/2);
//             for(int j=i+1; j<n; j++) v[j]=abs(v[j]-d);
//         }
//     }
//     ans.push_back(v[n-1]);

//     if(ans.size()>40){
//         cout<<-1<<endl;
//         return;
//     }

//     cout<<ans.size()<<endl;
//     for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n - 1; i++) {
        if ((v[i] % 2) != (v[i + 1] % 2)) {
            cout << -1 << "\n";
            return;
        }
    }

    vector<int> ans;
    while (true) {
        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());

        if (mn == 0 && mx == 0) break;

        int x = (mn + mx) / 2;
        ans.push_back(x);

        for (int i = 0; i < n; i++) {
            v[i] = abs(v[i] - x);
        }
    }

    if (ans.size() > 40) {
        cout << -1 << "\n";
        return;
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
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