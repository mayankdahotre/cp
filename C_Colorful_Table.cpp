#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> v2(k+1,0);

    vector<vector<int>> occ(k+1);

    for(int i=0; i<n; i++) occ[v[i]].push_back(i);
    
    for(int i=1; i<=k; i++){
        for(auto o: occ[i]){
            int c=0;
            for(int j=i+1; j<n; j++){
                if(v[j]>=i) c++;
                else break;
            }
            for(int j=i-1; j>=0; j--){
                if(v[j]>=i) c++;
                else break;
            }

            v2[i]=max(v2[i], 2*c);
        }
    }

    for(int i=1; i<=k; i++) cout<<v2[i]<<" ";
    cout<<endl;

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