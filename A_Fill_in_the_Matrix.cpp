#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,m;

    cin>>n>>m; // fix

    if(n+1>m){
        cout<<m<<endl;

        vector<int> v(m);
        for(int i=0; i<m; i++) v[i]=i;

        for(int i=0; i<n; i++){
            for(int j=i; j<=(i+m-1); j++) cout<<v[j%m]<<" ";
            cout<<endl;
        }
    }
    else if(m==1){
        cout<<0<<endl;
        for(int i=0; i<n; i++) cout<<0<<endl;
    }
    else{
        cout<<n<<endl;
        vector<vector<int>> v(m-1, vector<int>(m));
        int p=0;
        for(int i=0; i<m-1; i++){
            for(int j=0; j<m; j++) v[i][j]=(p+j)%m;
            p++;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cout<<v[i%(m-1)][j]<<" ";
            cout<<endl;
        }
    }

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