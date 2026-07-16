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

    int L=-1, R=-1, c=0;
    for(int i=0; i<n-1; i++){
        if(v[i]==v[i+1]) continue;
        if((i>0 && v[i]>=v[i-1] && v[i]>v[i+1]) || (i==0 && v[i]>v[i+1])){
            int k=0;
            for(int j=i; j<n; j++){
                if(v[j]>v[i]) k--;
                if(v[j]<v[i]) k++;

                if(k>c){
                    c=k;
                    R=j;
                    L=i;
                }
            }
        }
    }

    if(L==-1 && R==-1){
        cout<<1<<" "<<1<<endl;
        return;
    }

    cout<<L+1<<" "<<R+1<<endl;
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