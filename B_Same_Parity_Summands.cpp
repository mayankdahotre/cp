#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    if(n<k){
        no;
        return;
    }

    if(n%2){
        if(k%2){
            if(n-k+1>0){
                yes;
                for(int i=0; i<k-1; i++) cout<<"1"<<" ";
                cout<<n-k+1<<endl;
                return;
            }
            else{
                no;
                return;
            }
        }
        else{
            no;
            return;
        }
    }
    else{
        if(k%2){
            if(n-2*k+2>0){
                yes;
                for(int i=0; i<k-1; i++) cout<<"2"<<" ";
                cout<<n-2*k+2<<endl;
                return;
            }
            else{
                no;
                return;
            }
        }
        else{
            if(n-2*k+2>0){
                yes;
                for(int i=0; i<k-1; i++) cout<<"2"<<" ";
                cout<<n-2*k+2<<endl;
                return;
            }
            else if(n-k+1>0){
                yes;
                for(int i=0; i<k-1; i++) cout<<"1"<<" ";
                cout<<n-k+1<<endl;
                return;
            }
            else{
                no;
                return;
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        // debug(T);
        solve();
    }

    return 0;
}