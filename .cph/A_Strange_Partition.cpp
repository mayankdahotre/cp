#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum1 = 0;
    for(int i=0; i<n; i++){
        sum1+=v[i]/x;
        if(v[i]%x) sum1++;
    }

    int sum2 = 0;
    for(int i=0; i<n; i++){
        sum2+=v[i];
    }
    int sum3 = sum2/x;
    if(sum2%x) sum3++;

    cout<<sum3<<" "<<sum1<<endl;
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