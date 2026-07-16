// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s = to_string(n);
//     int m = s.length();

//     int x=max(0LL,m-3);
//     string l=string("1")+to_string(x,"1")+string("0");
//     string r=string("1")+to_string(x,"9")+string("8");

//     int li = stoi(l);
//     int ri = stoi(r);

//     if(li<=n || n<=ri) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

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

void solve() {
    int n;
    cin>>n;

    string s=to_string(n);
    int m=s.length();

    if(s[0]!='1'){ cout<<"NO"<<endl; return; }
    if(s[m-1]-'0'>8){ cout<<"NO"<<endl; return; }
    for(int i=1; i<m-1; i++) if(s[i]=='0'){ cout<<"NO"<<endl; return; }

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