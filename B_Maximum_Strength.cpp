#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    string l,r;
    cin>>l>>r;

    int c = r.length()-l.length();
    l=string(c,'0')+l;

    int k = -1;
    for(int i=0; i<r.length(); i++){
        if(r[i]!=l[i]){
            k=i;
            break;
        }
    }

    int ans = (r.length()-k-1)*9 + r[k]-l[k];

    if(k==-1){
        cout<<0<<endl;
        return;
    }

    cout<<ans<<endl;
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