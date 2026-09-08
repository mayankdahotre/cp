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

    for(auto p: f){
        if(p.second%p.first){
            cout<<-1<<endl;
            return;
        }
    }

    map<int, vector<int>> mv;
    for(int i=0; i<n; i++) mv[v[i]].push_back(i);

    vector<int> res(n,0);

    int x=1;
    for(auto p: mv){
        int i = p.first;
        vector<int> pos = p.second;

        int cnt = 0;
        for(auto j: pos){
            res[j]=x;
            cnt++;

            if(cnt%i==0){
                x++;
                cnt=0;
            }
        }
    }

    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<endl;

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