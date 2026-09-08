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

    string res="";
    int i=0, j=n-1;
    int p=1;

    while(i<=j){
        if(i==j){
            res+='L';
            break;
        }

        if(p){
            if(v[i]>v[j]){
                res+='L';
                i++;
                p=0;
            }
            else{
                res+='R';
                j--;
                p=0;
            }
        }
        else{
            if(v[i]>v[j]){
                res+='R';
                j--;
                p=1;
            }
            else{
                res+='L';
                i++;
                p=1;
            }
        }
    }

    cout<<res<<endl;
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