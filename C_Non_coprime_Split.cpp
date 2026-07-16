#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int l,r;
    cin>>l>>r;

    if(r<=3){
        cout<<-1<<endl;
        return;
    }
    else if(l==r && r%2){
        for(int i=2; i*i<=r; i++){
            if(r%i==0){
                cout<<i<<" "<<r-i<<endl;
                return;
            }
        }

        cout<<-1<<endl;
        return;
    }
    else{
        cout<<r/2<<" "<<r/2<<endl;
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