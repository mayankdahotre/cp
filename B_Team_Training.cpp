#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(), v.rend());

    int cnt = 0;
    int minn = v[0];
    int a = 0;
    for(int i=0; i<n; i++){
        if(v[i]>=x){
            cnt++;
            continue;
        }
        else{
            a++;
            minn = min(v[i],minn);
            if(a*minn>=x){
                cnt++;
                a=0;
                minn = v[i];
            }
        }
    }

    cout<<cnt<<endl;
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