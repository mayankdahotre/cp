#include <bits/stdc++.h>
using namespace std;

#define int long long

int sod(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int n;
    cin>>n;

    for(int i=(n+1)/2; i>=(n-1)/2; i--){
        if(abs(sod(i)-sod(n-i))<=1){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
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