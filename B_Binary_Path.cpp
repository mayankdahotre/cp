// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n;
//     cin>>n;

//     string a,b;
//     cin>>a>>b;

//     string s = string(n+1,'1');

//     map<string,int> mp;
//     for(int i=0; i<n; i++) {
//         string t = a.substr(0,i+1)+b.substr(i);
//         s = min(s,t);
//         mp[t]++;
//     }

//     cout<<s<<endl;
//     cout<<mp[s]<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while (T--) {
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    string s="";

    int pos=0;

    s+=a[0];

    while(pos<n-1 && a[pos+1]<=b[pos]) {
        s+=a[pos+1];
        pos++;
    }

    for(int i=pos; i<n; i++) s+=b[i];

    cout<<s<<endl;

    int w=1;

    for(int i=0; i<pos; i++) {
        if(a[i+1]==b[i]) w++;
        else w=1;
    }

    cout<<w<<endl;

    return;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}