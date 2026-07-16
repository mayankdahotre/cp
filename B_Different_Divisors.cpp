#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int d;
    cin>>d;

    int p1=d+1;
    while(true){
        bool ok=true;
        for(int i=2; i*i<=p1; i++){
            if(p1%i==0){
                ok=false;
                break;
            }
        }

        if(!ok){
            p1++;
            continue;
        }
        else break;
    }

    int p2 = p1+d;
    while(true){
        bool ok=true;
        for(int i=2; i*i<=p2; i++){
            if(p2%i==0){
                ok=false;
                break;
            }
        }

        if(!ok){
            p2++;
            continue;
        }
        else break;
    }

    cout<<p1*p2<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}