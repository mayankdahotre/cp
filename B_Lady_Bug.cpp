#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    string a,b;
    cin>>a>>b;

    int n0=0, n1=0;
    for(int i=0; i<n; i++){
        if(b[i]=='1'){
            if(i&1) n0++;
            else n1++;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]=='1'){
            if(i&1) n1++;
            else n0++;
        }
    }

   if(n0>n/2){
        cout<<"NO"<<endl;
        return;
   }
   if(n1>(n+1)/2){
        cout<<"NO"<<endl;
        return;
   }

   cout<<"YES"<<endl;
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
