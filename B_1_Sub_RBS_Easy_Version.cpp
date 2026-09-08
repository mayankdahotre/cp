#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int x=0;
    vector<int> v(n+1,0);
    for(int i=0; i<n; i++){
        if(s[i]=='(') x++;
        else x--;

        v[i+1]=x;
    }

    // debugv(v);

    bool ok = true;
    for(int i=1; i<n; i++) if(v[i-1]>v[i] && v[i+1]>v[i] && v[i]) ok = false;
    
    if(ok){
        cout<<-1<<endl;
        return;
    }

    vector<int> pre(n,0), suf(n,0);
    if(s[0]=='(') pre[0]=1;
    if(s[n-1]==')') suf[n-1]=1;
    for(int i=1; i<n; i++) pre[i]=pre[i-1]+(s[i]=='(');
    for(int i=n-2; i>=0; i--) suf[i]+=suf[i+1]+(s[i]==')');

    // debugv(pre);
    // debugv(suf);

    int ans=0;
    for(int i=0; i<n; i++) if(pre[i]==suf[i] && s[pre[i]-1]==')') ans=max(2*pre[i],ans);


    if(ans) cout<<ans<<endl;
    else cout<<-1<<endl;
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