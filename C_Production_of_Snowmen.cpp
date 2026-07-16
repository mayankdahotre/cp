#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n), c(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) cin>>c[i];

    int t1=0;
    for(int i=0; i<n; i++){
        bool ok = true;
        for(int j=0; j<n; j++){
            if(a[j]>=b[(j+i)%n]){
                ok = false;
                break;
            }
        }
        if(ok) t1++;
    }

    int t2=0;
    for(int i=0; i<n; i++){
        bool ok = true;
        for(int j=0; j<n; j++){
            if(b[j]>=c[(j+i)%n]){
                ok = false;
                break;
            }
        }
        if(ok) t2++;
    }

    cout<<t1*t2*n<<endl;
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