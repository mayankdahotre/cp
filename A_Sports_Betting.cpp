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

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> f;
    for(int i=0; i<n; i++) f[v[i]]++;

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int prev=0, cur=0;

    for(auto p: f){
        if(p.second==4){
            yes;
            return;
        }

        if(p.second>1){
            if(prev==0) prev = p.first;
            else if(cur==0){
                cur = p.first;

                if(find(v.begin(), v.end(), cur) - find(v.begin(), v.end(), prev) == cur - prev){
                    yes;
                    return;
                }
            }
            else{
                prev = cur;
                cur = p.first;

                if(find(v.begin(), v.end(), cur) - find(v.begin(), v.end(), prev) == cur - prev){
                    yes;
                    return;
                }
            }
        }
    }

    no;
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