#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9+7;

int power(int a, int b){
    int res = 1;
    while(b){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int totalXor = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        totalXor ^= a[i];
    }
    if(totalXor != 0){
        cout << 0 << endl;
        return;
    }
    cout << (power(2, n-1)-1 + MOD)%MOD << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
