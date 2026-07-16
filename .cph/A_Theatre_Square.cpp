#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,a;
    cin>>n>>m>>a;

    int x = n/a;
    int y = m/a;

    if(n%a!=0) x++;
    if(m%a!=0) y++;

    cout<<x*y<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}