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

    int prev=0;
    int ta=0, tb=0;
    int i=0, j=n-1;
    int ans=0;

    while(i<=j){
        int x=0;
        while(i<=j && x<=prev){
            x+=v[i];
            i++;
        }
        prev=x;
        ta+=x;
        ans++;

        if(i>j){
            break;
        }

        int y=0;
        while(i<=j && y<=prev){
            y+=v[j];
            j--;
        }
        prev=y;
        tb+=y;
        ans++;
    }

    cout<<ans<<" "<<ta<<" "<<tb<<endl;
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