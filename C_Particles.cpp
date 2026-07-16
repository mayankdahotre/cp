// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> o,e;
//     for(int i=0; i<n; i+=2) e.push_back(v[i]);
//     for(int i=1; i<n; i+=2) o.push_back(v[i]);

//     if(!o.size()) { cout<<e[0]<<endl; return; }

//     int cur1 = e[0];
//     int sume = e[0];

//     for(int i=0; i<e.size(); i++){
//         cur1 = max(e[i], cur1+e[i]);
//         sume = max(sume, cur1);
//     }

//     int cur2 = o[0];
//     int sumo = o[0];

//     for(int i=0; i<o.size(); i++){
//         cur2 = max(o[i], cur2+e[i]);
//         sumo = max(sumo, cur2);
//     }

//     cout<<max(sumo, sume)<<endl;
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
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> o, e;
    for(int i=0; i<n; i+=2) e.push_back(v[i]);
    for(int i=1; i<n; i+=2) o.push_back(v[i]);

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    int sume = 0, sumo = 0;
    for(int i=0; i<(int)o.size(); i++) if(o[i]>0) sumo+=o[i];
    for(int i=0; i<(int)e.size(); i++) if(e[i]>0) sume+=e[i];

    if(o.empty()) { cout << e[0] << endl; return; }
    else if(o.back()<0 && e.back()<0){ cout<<max(o.back(), e.back()); return; }
    else {     cout << max(sumo, sume) << endl; return; }

    // int cur1 = e[0], sume = e[0];
    // for(int i=1; i<(int)e.size(); i++){
    //     cur1 = max(e[i], cur1+e[i]);
    //     sume = max(sume, cur1);
    // }

    // int cur2 = o[0], sumo = o[0];
    // for(int i=1; i<(int)o.size(); i++){
    //     cur2 = max(o[i], cur2+o[i]);
    //     sumo = max(sumo, cur2);
    // }

    // cout << max(sumo, sume) << endl;
    // return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}