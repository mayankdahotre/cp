#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    deque<int> q;
    for(int i=1; i<=n; i++){
        if(i<4) q.push_back(i);
        else {
            if(i&1) q.push_back(i);
            else q.push_front(i);
        }
    }

    for(int i=0; i<n; i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;

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