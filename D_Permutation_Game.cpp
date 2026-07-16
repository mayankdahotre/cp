// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int dfs(int i, int j, int k, int sum, int mxi, vector<int> a, vector<int> p){
//     if(k-j==0) return sum;
//     if(i==mxi) return sum+(k-j)*a[mxi];

//     int ans = max(sum+a[p[i]]*(k-j), dfs(p[p[i]], j+1, k, sum+a[p[i]], mxi, a, p));

//     return ans;
// }

// void solve() {
//     int n,k,pb,ps;
//     cin>>n>>k>>pb>>ps;

//     pb--;
//     ps--;

//     vector<int> p(n), a(n);
//     for(int i=0; i<n; i++) cin>>p[i];
//     for(int i=0; i<n; i++) cin>>a[i];

//     int mxi = max_element(a.begin(), a.end()) - a.begin();
//     int mx = a[mxi];

//     int ans1 = dfs(pb, 0, k, 0, mxi, a, p);
//     int ans2 = dfs(ps, 0, k, 0, mxi, a, p);

//     if(ans1>ans2) cout<<"Bodya"<<endl;
//     else if(ans1<ans2) cout<<"Sasha"<<endl;
//     else cout<<"Draw"<<endl;

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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int calc(int st, int k, vector<int>& a, vector<int>& p){
//     int cur = st;
//     int sum = 0;
//     int ans = 0;

//     for(int s=0; s<min((int)a.size(), k); s++){
//         ans = max(ans, sum+a[cur]*(k-s));
//         sum += a[cur];
//         cur = p[cur];
//     }

//     return ans;
// }

// void solve() {
//     int n,k,pb,ps;
//     cin>>n>>k>>pb>>ps;

//     pb--;
//     ps--;

//     vector<int> p(n), a(n);

//     for(int i=0;i<n;i++){
//         cin>>p[i];
//         p[i]--;
//     }

//     for(int i=0;i<n;i++) cin>>a[i];

//     int ans1 = calc(pb, k, a, p);
//     int ans2 = calc(ps, k, a, p);

//     if(ans1 > ans2) cout<<"Bodya"<<endl;
//     else if(ans1 < ans2) cout<<"Sasha"<<endl;
//     else cout<<"Draw"<<endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

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

int dfs(int i, int j, int k, int sum, int mxi, vector<int> &a, vector<int> &p){
    if(k-j==0) return sum;
    if(i==mxi) return sum+(k-j)*a[mxi];
    if(j==(int)a.size()) return sum+(k-j)*a[i];

    int ans = max(sum+(k-j)*a[i], dfs(p[i], j+1, k, sum+a[i], mxi, a, p));

    return ans;
}

void solve() {
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;

    pb--;
    ps--;

    vector<int> p(n), a(n);
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++) p[i]--;

    int mxi = max_element(a.begin(), a.end()) - a.begin();

    int ans1 = dfs(pb, 0, k, 0, mxi, a, p);
    int ans2 = dfs(ps, 0, k, 0, mxi, a, p);

    if(ans1>ans2) cout<<"Bodya"<<endl;
    else if(ans1<ans2) cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;

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