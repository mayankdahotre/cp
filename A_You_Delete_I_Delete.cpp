#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    string s;
    cin>>s;

    int n=s.length();

    int o0=-1, o1=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            o0=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            o1=i;
            break;
        }
    }

    string ans="";
    for(int i=0; i<n; i++){
        if(i==o0 || i==o1) continue;
        else ans+=s[i];
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