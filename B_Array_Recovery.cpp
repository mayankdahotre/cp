#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
    }

    vector<int> a(n);
    a[0]=d[0];
    for(int i=1; i<n; i++){
        int a1 = a[i-1]+d[i];
        int a2 = a[i-1]-d[i];
        if(a1>=0 && a2>=0 && a1!=a2){
            cout<<-1<<endl;
            return;
        }
        else{
            a[i]=a[i-1]+d[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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