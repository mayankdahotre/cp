#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin>>n;

    if(n==1 || n==3){
        cout<<-1<<endl;
        return;
    }

    string s = string(n,'3');

    s[n-2]='6';
    s[n-1]='6';

    if(n>4 && n%2) s[n-4]='6';

    for(int i=0; i<n; i++) cout<<s[i];
    cout<<endl;

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