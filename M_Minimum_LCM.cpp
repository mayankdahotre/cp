#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b){
    int maxn = max(a,b);
    int minn = min(a,b);
    if(minn==0){
        return maxn;
    }

    return gcd(minn, maxn%minn);
}

void solve() {
    int n;
    cin >> n;

    int a = 1;
    for(int g=2; g*g<=n; g++){
        if(n%g==0){
            a=n/g;
            break;
        }
    }
    cout << a << " " << n - a << endl;
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
