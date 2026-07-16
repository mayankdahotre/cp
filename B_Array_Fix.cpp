#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool stop=false;

    if((v[1]>=10 && v[0]%10>v[1]/10) || (v[1]<10 && v[0]%10>v[1]) || (v[0]/10>v[0]%10)){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1; i<n-1; i++){
        if(v[i]>v[i+1]){
            int t1=v[i]/10;
            int t0=v[i]%10;

            if((t1<v[i-1]%10) || (v[i+1]>=10 && t0>v[i+1]/10) || (v[i+1]<10 && t0>v[i+1]) || (v[i]/10>v[i]%10)){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
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