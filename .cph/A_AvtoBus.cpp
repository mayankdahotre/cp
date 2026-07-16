#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int x,y;
    if(n%2 || n<4){
        cout<<-1<<endl;
        return;
    }
    else{
        if(n%6==2 || n%6==4) x=n/6+1;
        else x=n/6;

        y=n/4;
    }

    cout<<x<<" "<<y<<endl;
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