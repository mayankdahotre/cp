#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int m=1,k=0;
    while(true){
        if(m>=n) break;
        else{
            m=2*(m+1)-1;
            k+=2;
        }
    }

    cout<<k+3<<endl;
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