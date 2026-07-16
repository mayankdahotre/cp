#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>b[i];

    int num = 0;
    int n2 = 0;
    for(int i=0; i<n; i++){
        if(b[i]==2) n2++;
    }

    num = n-n2-(n2/2);

    if(num<0){
        cout<<0<<endl;
        return;
    }

    cout<<num<<endl;
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