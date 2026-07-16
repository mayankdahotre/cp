#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int one = count(s.begin(), s.end(), '1');
    int zero = n - one;

    bool bd = false;
    for(int i=0; i<=k; i++){
        int a = one - 2*i;
        int b = zero - 2*(k-i);
        if(a>=0 && b>=0 && (abs(a-b))==0) bd = true;
    }

    if(bd){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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
