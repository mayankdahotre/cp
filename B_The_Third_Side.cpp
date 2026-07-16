#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    while(v.size()!=1){
        sort(v.begin(), v.end());
        int a = v[0]+v[1]-1;
        v.push_back(a);
        v.erase(v.begin(),v.begin()+2);
    }

    cout<<v[0]<<endl;
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