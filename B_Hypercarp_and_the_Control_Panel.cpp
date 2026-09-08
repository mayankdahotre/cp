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

    vector<pair<int,int>> vp;
    vp.push_back({1,0});
    int x=v[0], c=0;
    for(int i=0; i<n; i++){
        if(v[i]==x) c++;
        else{
            vp.push_back({c,x});
            c=1;
            x=v[i];
        }
    }
    vp.push_back({c,x});
    vp.push_back({1,0});

    for(int i=1; i<vp.size()-1; i++){
        if(vp[i].first>1 && vp[i+1].first>1){
            cout<<vp.size()<<endl;
            return;
        }
    }

    for(int i=1; i<vp.size()-1; i++){
        if(vp[i].first==1){
            if(vp[i-1].first>1 && vp[i+1].first>1){
                if(vp[i-1].second != vp[i+1].second){
                    cout<<vp.size()-1<<endl;
                    return;
                }
            }
            else if(vp[i-1].first>1 && vp[i+1].first==1){
                if(vp[i-1].second != vp[i+1].second){
                    cout<<vp.size()-1<<endl;
                    return;
                }
            }
            else if(vp[i+1].first>1 && vp[i-1].first==1){
                if(vp[i-1].second != vp[i+1].second){
                    cout<<vp.size()-1<<endl;
                    return;
                }
            }
        }
    }

    cout<<vp.size()-2<<endl;
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