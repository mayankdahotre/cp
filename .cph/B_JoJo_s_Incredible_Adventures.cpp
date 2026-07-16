#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length();

    string s2 = s+s;
    int one=0, max1=0;
    for(int i=0; i<2*n; i++){
        if(s2[i]=='1') one++;
        else{
            max1=max(max1,one);
            one=0;
        }
    }
    max1=max(max1,one);

    int ans = 0;
    if(max1%2) ans = pow((max1+1)/2 ,2);
    else ans = max1/2*(max1/2 + 1);
    if(max1==2*n) ans = n*n;

    cout<<ans<<endl;
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