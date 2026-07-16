#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int e,o;
    cin>>e>>o;

    int n=e+o;

    if(n==1){
        if(e){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

    if(o<e){
        cout<<"NO"<<endl;
        return;
    }

    if(!o){
        cout<<"NO"<<endl;
        return;
    }

    if(n%2==0 && !e){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    for(int i=1; i<2*e; i++){
        cout<<i<<" "<<i+1<<endl;
    }

    int rt = max(2*e, 1LL);
    for(int i=rt+1; i<=n; i++){
        cout<<rt<<" "<<i<<endl;
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