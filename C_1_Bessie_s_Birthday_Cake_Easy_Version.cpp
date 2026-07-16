// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(x,0);
//     for(int i=0; i<x; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     // debugv(v);

//     int c=0;
//     for(int i=0; i<x; i++){
//         if(v[i+1]-v[i]==2 && x<=n-2) c++;
//     }

//     if(find(v.begin(), v.end(), n)!=v.end() && find(v.begin(), v.end(), 0)==v.end() && find(v.begin(), v.end(), 1)!=v.end()) c++;
//     if(find(v.begin(), v.end(), n-1)!=v.end() && find(v.begin(), v.end(), n)==v.end() && find(v.begin(), v.end(), 0)!=v.end()) c++;

//     // debug(n);
//     // debug(x);
//     // debug(c);
//     cout<<x-2+c<<endl;
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
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(x,0);
    for(int i=0; i<x; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int c=0;

    for(int i=0; i<x; i++){
        int nxt = (i+1)%x;
        int gap;

        if(nxt==0) gap = n - v[i] + v[0];
        else gap = v[nxt] - v[i];

        if(gap==2) c++;
    }

    cout<<x-2+c<<endl;
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