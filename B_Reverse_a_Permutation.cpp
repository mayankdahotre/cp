#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int l=0;
    for(int i=0; i<n; i++){
        if(v[i]!=n-i){
            l=i;
            break;
        }
    }

    int val = n-l;
    int r = 0;
    for(int i=0; i<n; i++){
        if(v[i]==val){
            r=i;
            break;
        }
    }

    reverse(v.begin()+l, v.begin()+r+1);

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
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