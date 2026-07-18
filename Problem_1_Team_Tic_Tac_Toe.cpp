#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    vector<string> v(3);
    for(int i=0; i<3; i++) cin>>v[i];

    int sin=0, dou=0;
    for(int i=0; i<3; i++){
        map<char,int> mp;
        for(int j=0; j<3; j++){
            if(mp.count(v[i][j])==1) sin++;
            else if(mp.count(v[i][j])==2){
                dou++;
                sin--;
            }

            mp[v[i][j]]++;
        }
    }

    for(int i=0; i<3; i++){
        map<char,int> mp;
        for(int j=0; j<3; j++){
            if(mp.count(v[j][i])==1) sin++;
            else if(mp.count(v[j][i])==2){
                dou++;
                sin--;
            }

            mp[v[j][i]]++;
        }
    }

    map<char,int> mp;
    mp[v[0][0]]=1;
    if(mp[v[1][1]]==1) sin++;
    if(mp[v[2][2]]==2){
        sin--;
        dou++;
    }
    
    mp.clear();
    mp[v[0][2]]=1;
    if(mp[v[1][1]]==1) sin++;
    if(mp[v[2][0]]==2){
        sin--;
        dou++;
    }

    cout<<sin<<endl;
    cout<<dou<<endl;
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