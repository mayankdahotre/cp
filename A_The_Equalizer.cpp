#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;

    int sum=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        sum+=a;
    }

    if(sum%2==0 && (n*k)%2==1){
        cout<<"NO"<<endl;
        return;
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