#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    vector<string> v(8);
    for(int i=0;  i<8; i++) cin>>v[i];
    int cnt = 0;
    for(int i=0; i<8; i++){
        int cnt=0;
        int c=0;
        for(int j=0; j<8; j++){
            if(v[i][j]=='#') {
                cnt++;
                c=j;
            }
        }
        if(cnt==1){
            cout<<i+1<<" "<<c+1<<endl;
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