#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> ca(n+1,0), cb(n+1,0);
    for(int i=1; i<=n; i++) ca[i]+=ca[i-1]+(s[i-1]=='a');
    for(int i=1; i<=n; i++) cb[i]+=cb[i-1]+(s[i-1]=='b');

    int ta = ca[n], tb = cb[n];
    int d = ta-tb;

    if(ta==0 || tb==0){
        cout<<-1<<endl;
        return;
    }

    vector<int> pref(n,0);
    for(int i=0; i<n; i++) pref[i]=ca[i]-cb[i];

    map<int,int> last;
    last[0]=0;

    int ans=n;

    for(int i=1; i<=n; i++){
        int need = pref[i]-d;

        if(last.find(need)!=last.end()){
            ans = min(ans, i-last[need]);
        }

        last[pref[i]]=i;
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