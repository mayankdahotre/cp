#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int ans=0;
    bool b = false;

    int a = count(v.begin(), v.end(), 1);
    if(a!=0) b=true;
    else{
        for(int i=0; i<n-1; i++){
            int g = __gcd(v[i],v[i+1]);
            if(g==1){
                b=true;
                break;
            }
        }
    }

    if(b){
        cout<<n-a<<endl;
        return;
    }
    else{
        cout<<n+1<<endl;
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