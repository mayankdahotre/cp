#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a,p;
    map<int,int> m;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int c=0;
            while(n%i==0) n/=i; c++;
            m[i]=c;
        }
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