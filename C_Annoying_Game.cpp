// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cerr << #x << " = " << (x) << endl;
// #define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
// #define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
// #define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
// #define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
// #define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
// #define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
// #define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> b(n);
//     for(int i=0; i<n; i++) cin>>b[i];

//     if(k%2==0){
//         int cur=v[0], sum=v[0];
//         for(int i=1; i<n; i++){
//             cur=max(v[i], cur+v[i]);
//             sum=max(sum, cur);
//         }

//         cout<<sum<<endl;
//         return;
//     }

//     int l=0, r=0, cur=v[0], sum=v[0];
//     for(int i=0; i<n; i++){
//         if(v[i]>cur+v[i]) l=i;
//         cur = max(v[i], cur+v[i]);
//         if(cur>sum) r=i;
//         sum=max(cur, sum);
//     }

//     int ans=0;
//     for(int i=l; i<=r; i++) ans=max(ans, sum+b[i]);
//     if(l-1>=0) ans=max(ans, sum+v[l-1]+b[l-1]);
//     if(r+1<=n-1) ans=max(ans, sum+v[r+1]+b[r+1]);

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
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    if(k % 2 == 0) {
        int cur = v[0], sum = v[0];

        for(int i = 1; i < n; i++) {
            cur = max(v[i], cur + v[i]);
            sum = max(sum, cur);
        }

        cout << sum << endl;
        return;
    }

    // Minimal fix: correctly track maximum subarray boundaries
    int l = 0, r = 0;
    int temp_l = 0;

    int cur = v[0], sum = v[0];

    for(int i = 1; i < n; i++) {

        if(v[i] > cur + v[i]) {
            cur = v[i];
            temp_l = i;
        }
        else {
            cur += v[i];
        }

        if(cur > sum) {
            sum = cur;
            l = temp_l;
            r = i;
        }
    }

    int ans = LLONG_MIN;

    // Add b[i] to an element already inside the maximum subarray
    for(int i = l; i <= r; i++)
        ans = max(ans, sum + b[i]);

    // Extend maximum subarray by one element on either side
    if(l - 1 >= 0)
        ans = max(ans, sum + v[l - 1] + b[l - 1]);

    if(r + 1 < n)
        ans = max(ans, sum + v[r + 1] + b[r + 1]);

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}