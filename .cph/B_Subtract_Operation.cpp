#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    set<int> st;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        st.insert(a);
    }

    for(auto i: st){
        if(st.find(i-x)!=st.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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