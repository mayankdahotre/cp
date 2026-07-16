// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s,t;
//     cin>>s>>t;

//     int nd=0, rd=0;
//     for(int i=0; i<n; i++) if(s[i]-t[i]) nd++;
//     for(int i=0; i<n; i++) if(s[i]-t[n-1-i]) rd++;

//     int ans=0;
//     if(!nd){ cout<<0<<endl; return; }
//     if(!rd){ cout<<2<<endl; return; }
//     // if(rd<nd) ans+=2;
//     if(rd<nd){ cout<<2*((rd+1)/2)<<endl; return; }
//     else{ cout<<2*((nd+1)/2)-1<<endl; return; }

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
    cin >> n;

    string s,t;
    cin >> s >> t;

    int nd=0, rd=0;

    for(int i=0; i<n; i++) if(s[i]!=t[i]) nd++;
    for(int i=0; i<n; i++) if(s[i]!=t[n-1-i]) rd++;

    int ans = 1e18;

    if(nd) ans=min(ans, 2*nd-(nd%2));
    else ans=0;

    if(!rd) ans=min(ans, 2LL);
    else ans=min(ans, 2*rd-!(rd&1));

    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}