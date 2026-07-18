// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,x;
//     cin>>n>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<vector<int>> mod(x);
//     mod[0].push_back(0);
//     vector<int> pre(n+1,0);

//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum+=v[i];

//         int k = ((sum%n)+n)%n;
//         mod[k].push_back(i+1);

//         pre[i+1]+=pre[i]+v[i];
//     }

//     int ans=0;
//     for(int i=0; i<x; i++){
//         for(int j=0; j<mod[i].size()-1; j++){
//             if(pre[mod[i][j+1]]-pre[mod[i][j]]==x) ans++;
//         }
//     }

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int x;

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,x;
    cin>>n>>x;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans=0;
    int sum=0;

    map<int,int> mp;
    mp[0] = 1;

    for(int i=0; i<n; i++){
        sum += v[i];

        if(mp.count(sum - x)) ans += mp[sum - x];

        mp[sum]++;
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}