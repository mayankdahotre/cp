#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<1<<endl;
        cout<<a<<endl;
        return;
    }

    cout<<3<<endl;
    if(a<b){
        int mx = b+1;
        int mn = 3*a-2*b-1;

        cout<<mn<<" "<<b<<" "<<mx<<endl;
        return;
    }
    if(a>b){
        int mn = b-1;
        int mx = 3*a-2*b+1;

        cout<<mn<<" "<<b<<" "<<mx<<endl;
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}