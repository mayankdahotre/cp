#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<vector<int>> v(n,vector<int>(n,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    int num = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=n-1-i && j!=n-1-j) num+= v[i][j]^v[n-1-i][n-1-j];
        }
    }
    num/=2;

    if(num<=k && (k-num)%2==0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
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

