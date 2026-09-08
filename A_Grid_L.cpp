#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int p,q;
    cin>>p>>q;

    int x = p+2*q;

    if(x<=3){
        cout<<-1<<endl;
        return;
    }

    int p2=p;
    bool ok = false;
    for(int i=0; i<=p2; i+=2){
        if(q-2==p && q>2){
            cout<<1<<" "<<p+1<<endl;
            ok = true;
            return;
        }

        if((q>4 && p==(q-2)/2-2 && q%2==0)){
            cout<<2<<" "<<p+2<<endl;
            ok = true;
            return;
        }

        if(p==(q-1)/2 && q%2){
            cout<<2<<" "<<p<<endl;
            ok = true;
            return;
        }
        
        q++;
        p-=2;
    }

    if(q-2==p && q>2){
        cout<<1<<" "<<p+1<<endl;
        ok = true;
        return;
    }

    if((q>4 && p==(q-2)/2-2 && q%2==0)){
        cout<<2<<" "<<p+2<<endl;
        ok = true;
        return;
    }

    if(p==(q-1)/2 && q%2){
        cout<<2<<" "<<p<<endl;
        ok = true;
        return;
    }

    if(!ok){
        cout<<-1<<endl;
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        // cout<<T<<endl;
        solve();
        // cout<<endl;
    }

    return 0;
}