// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     string s;
//     cin>>s;

//     cout<<endl;

//     cout<<"s = "<<s<<endl;

//     vector<int> op;
//     for(int i=0; i<2*n; i++) if(s[i]=='1') op.push_back(i);

//     if(op.empty()){
//         cout<<0<<" "<<0<<endl;
//         return;
//     }

//     op.push_back(op[0]+2*n);

//     debugv(op);

//     // s+=s;
//     for(int i=0; i<op.size()-1; i++){
//         int l = op[i+1]-op[i]-1;

//         if(l==0) continue;
//         // cout<<"l = "<<l<<endl;
//         int m = min(l,k);

//         // cout<<"m = "<<m<<endl;
//         debug(op[i]);
//         debug((op[i]+m));

//         s[(op[i]+m)%(2*n)]='1';
                    
//         s[op[i]]='0';
//     }

//     cout<<"s = "<<s<<endl;

//     int o=0, e=0;
//     for(int i=0; i<2*n; i++){
//         if(s[i]=='1'){
//             if(i%2) o++;
//             else e++;
//         }
//     }

//     cout<<o<<" "<<e<<endl;
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






// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     string s;
//     cin>>s;

//     vector<int> op;
//     for(int i=0; i<2*n; i++) if(s[i]=='1') op.push_back(i);

//     if(op.empty()){
//         cout<<0<<" "<<0<<endl;
//         return;
//     }

//     int tl = 0;
//     int m = op.size();
//     for(int i=0; i<op.size(); i++){
//         int l = op[(i+1)%op.size()]+2*n-op[i]-1;

//         if(l==0) continue;

//         tl+=l;
//     }

//     k=min(k,tl);

//     int i=0;
//     while(k){
//         int j = (i+1)%(op.size());

//         if(op[j]-op[i]>1){
//             op[i]=(op[i]+1)%(2*n);
//             k--;
//         }

//         i = (i + 1) % (op.size());
//     }


//     int o=0, e=0;
//     for(int i=0; i<op.size(); i++){
//         if(op[i]%2) o++;
//         else e++;
//     }

//     cout<<o<<" "<<e<<endl;
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
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> op;
    for (int i = 0; i < 2 * n; i++) {
        if (s[i] == '1') op.push_back(i);
    }

    if (op.empty()) {
        cout << 0 << " " << 0 << "\n";
        return;
    }

    int m = op.size();
    int tl = 0;

    // Calculate total available spaces to move in circular array
    for (int i = 0; i < m; i++) {
        int j = (i + 1) % m;
        int gap = (op[j] - op[i] - 1 + 2 * n) % (2 * n);
        tl += gap;
    }

    k = min(k, tl);

    int i = 0;
    while (k > 0) {
        int j = (i + 1) % m;
        // Compute circular gap between op[i] and op[j]
        int gap = (op[j] - op[i] - 1 + 2 * n) % (2 * n);

        if (gap > 0) {
            op[i] = (op[i] + 1) % (2 * n);
            k--;
        }

        i = (i + 1) % m;
    }

    int o = 0, e = 0;
    for (int idx = 0; idx < m; idx++) {
        if (op[idx] % 2 != 0) o++;
        else e++;
    }

    cout << o << " " << e << "\n";
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