#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int m,n;
    cin>>m>>n;

    int a = m/2;
    int b = n/3;

    // cout<<m<<" "<<n<<endl;

    if(m<n && min(a,b)>=n-m){
        cout<<"Bob"<<endl;
        return;
    }

    cout<<"Alice"<<endl;
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