#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n-1; i++){
        if(s[i]>s[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}