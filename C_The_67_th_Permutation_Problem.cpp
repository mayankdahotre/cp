#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int i=n;
    int j=3*n;

    vector<int> v;
    while(i){
        v.push_back(i);
        v.push_back(j-1);
        v.push_back(j);
        i--;
        j-=2;
    }

    for(int i=0; i<3*n; i++) cout<<v[i]<<" ";
    cout<<endl;
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