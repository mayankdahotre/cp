// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// struct BTNode {
//     char c;
//     BTNode *l;
//     BTNode *r;

//     BTNode(): c('0'), l(nullptr), r(nullptr) {}
//     BTNode(char c): c(c), l(nullptr), r(nullptr) {}
//     BTNode(char c, BTNode *l, BTNode *r): c(c), l(l), r(r) {}
// };

// int dfs(BTNode *btn, string s2, string path, int x){
//     if(!btn->l && !btn->r){
//         int val=0;
//         for(int i=0; i<path.size(); i++) if(path[i]!=s2[i]) val++;
//         x=min(x, val);
//     }

//     if(btn->l) dfs(btn->l, s2+btn->c, path+"L", x);
//     if(btn->r) dfs(btn->r, s2+btn->c, path+"R", x);
// }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     vector<BTNode *> btns(n, new BTNode());
//     for(int i=0; i<n; i++){
//         int a,b;
//         cin>>a>>b;
        
//         if(a) btns[i]->l=btns[a-1];
//         if(b) btns[i]->r=btns[b-1];
//     }

//     int ans = dfs(btns[0], "", "", 1e18);

//     cout<<ans<<endl;
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

// struct BTNode {
//     char c;
//     BTNode *l;
//     BTNode *r;

//     BTNode(): c('0'), l(nullptr), r(nullptr) {}
//     BTNode(char c): c(c), l(nullptr), r(nullptr) {}
//     BTNode(char c, BTNode *l, BTNode *r): c(c), l(l), r(r) {}
// };

// int dfs(BTNode *btn, string s2, string path){
//     if(!btn->l && !btn->r){
//         int val=0;
//         for(int i=0; i<path.size(); i++){
//             if(path[i]!=s2[i]) val++;
//         }
//         return val;
//     }

//     int ans=1e18;

//     if(btn->l) ans=min(ans, dfs(btn->l, s2+btn->c, path+"L"));

//     if(btn->r) ans=min(ans, dfs(btn->r, s2+btn->c, path+"R"));

//     return ans;
// }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     vector<BTNode *> btns(n);

//     for(int i=0; i<n; i++) btns[i]=new BTNode(s[i]); 

//     for(int i=0; i<n; i++){
//         int a,b;
//         cin>>a>>b;

//         if(a) btns[i]->l=btns[a-1];
//         if(b) btns[i]->r=btns[b-1];
//     }

//     int ans = dfs(btns[0], "", "");

//     cout<<ans<<endl;
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

struct BTNode {
    char c;
    BTNode *l;
    BTNode *r;

    BTNode(): c('0'), l(nullptr), r(nullptr) {}
    BTNode(char c): c(c), l(nullptr), r(nullptr) {}
    BTNode(char c, BTNode *l, BTNode *r): c(c), l(l), r(r) {}
};

int dfs(BTNode *btn){
    if(!btn->l && !btn->r) return 0;

    int ans = 1e18;

    if(btn->l) ans = min(ans, dfs(btn->l) + (btn->c != 'L'));

    if(btn->r) ans = min(ans, dfs(btn->r) + (btn->c != 'R'));

    return ans;
}

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<BTNode *> btns(n);
    for(int i=0; i<n; i++) btns[i] = new BTNode(s[i]);

    for(int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;

        if(a) btns[i]->l = btns[a-1];
        if(b) btns[i]->r = btns[b-1];
    }

    cout<<dfs(btns[0])<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}