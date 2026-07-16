#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    string a,b;
    cin>>a>>b;

    int n = a.length();

    int j=0;

    bool ok=true;
    while(j<n){
        if(a[j]==b[j]) j++;
        else{
            if(a[j]>b[j]){
                ok = false;
                break;
            }
            break;
        }
    }

    
    for(int i=j+1; i<n; i++){
        int mn = min(a[i],b[i]);
        int mx = max(a[i],b[i]);
        if(ok){
            a[i]=mx;
            b[i]=mn;
        }
        else{
            a[i]=mn;
            b[i]=mx;
        }
    }

    cout<<a<<endl;
    cout<<b<<endl;

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