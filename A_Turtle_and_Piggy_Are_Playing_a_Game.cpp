#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int l,r;
    cin>>l>>r;

    int i=1;
    int n=0;
    while(i<=r){
        i<<=1;
        n++;
    }
    n--;

    cout<<n<<endl;

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