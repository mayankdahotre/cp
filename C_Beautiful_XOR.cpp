#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b;
    cin>>a>>b;

    int msba =  63 - __builtin_clzll(a);
    int msbb =  63 - __builtin_clzll(b);

    if(a==b) cout<<0<<endl;
    else if(msbb>msba) cout<<-1<<endl;
    else{
        // int f=a^(1LL<<(msba+1)-1);
        // int s=f^b;

        // cout<<2<<endl;
        // cout<<f<<" "<<s<<endl;

        vector<int> v;
        for(int i=0; i<31; i++){
            int x = 1LL<<i;
            if (x<=a && (a&x)==0){
                a+=x;
                v.push_back(x);
            }
        }

        for(int i=0; i<31; i++){
            int x = 1LL<<i;
            if(x<=a && (b&x)==0){
                v.push_back(x);
            }
        }

        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<endl;
        // return;
    }
    // cout<<endl;
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