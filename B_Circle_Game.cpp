#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    if(n%2){
        cout<<"Mike"<<endl;
        return;
    }
    else{
        int si=0;
        for(int i=0; i<n; i++){
            if(v[i]<v[si]) si=i;
        }
        if(si%2){
            cout<<"Mike"<<endl;
            return;
        }
        else{
            cout<<"Joe"<<endl;
            return;
        }
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