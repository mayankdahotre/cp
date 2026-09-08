// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cerr << #x << " = " << (x) << endl;
// #define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
// #define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
// #define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
// #define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
// #define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
// #define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
// #define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,q;
//     cin>>n>>q;

//     vector<int> v(n,0), act(n,0);
//     int ans=0;

//     while(q--){
//         int a;
//         cin>>a;

//         if(a==1){
//             int b;
//             cin>>b;

//             b--;

//             ans^=v[b];
//             v[b]++;
//             ans^=v[b];

//             act[b]=1;
//         }
//         else{
//             for(int i=0; i<act.size(); i++){
//                 ans^=v[act[i]];
//                 v[act[i]]--;

//                 if(!v[act[i]]) act[i]=0;
//                 else ans^=v[act[i]];
//             }
//         }

//         cout<<ans<<endl;
//     }

//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n, 0), act;
    int ans = 0;

    while (q--) {
        int a;
        cin >> a;

        if (a == 1) {
            int b;
            cin >> b;
            b--;

            if (v[b] == 0) act.push_back(b);

            ans ^= v[b];
            v[b]++;
            ans ^= v[b];
        }
        else {
            vector<int> nxt;
            for (int i : act) {
                ans ^= v[i];
                v[i]--;
                ans ^= v[i];

                if (v[i] > 0) nxt.push_back(i);
            }
            act = move(nxt);
        }

        cout << ans << endl;
    }

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}