#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int mni = min_element(v.begin(), v.end()) - v.begin();
    int mn = v[mni];

    bool dif_min_ok = true;
    int mni2=-1;
    for(int i=n-1; i>=0; i--){
        if(v[i]==v[mni] && i!=mni){
            dif_min_ok=false;
            mni2=i;
            break;
        }
    }

    for(int i=mni; i<=mni2; i++){
        if(v[i]!=mn){
            cout<<-1<<endl;
            return;
        }
    }

    if(!is_sorted(v.begin()+mni, v.end())){
        cout<<-1<<endl;
        return;
    }

    cout<<mni<<endl;
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