#include <bits/stdc++.h>
using namespace std;

#define int long long

int helper(vector<int> &v, int i){
   if(i==v.size()-1) return 0;
   return min(abs(v[i]-v[i+1])+helper(v, i+1), abs(v[i]-v[i+2])+helper(v, i+2)); 
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans = helper(v, 0);
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