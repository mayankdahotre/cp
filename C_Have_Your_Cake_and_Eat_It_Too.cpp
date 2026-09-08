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
//     int n;
//     cin>>n;

//     vector<vector<int>> v(3, vector<int>(n));
//     for(int i=0; i<3; i++) for(int j=0; j<n; j++) cin>>v[i][j];

//     vector<vector<int>> pre(3, vector<int>(n+1,0));
//     for(int i=0; i<3; i++) for(int j=0; j<n; j++) pre[i][j+1]=pre[i][j]+v[i][j];

//     int tot = accmulate(a.begin(), a.end());
//     int x = (tot+2)/3;

//     vector<pair<int,int>> ans;

//     for(int i=0; i<3; i++){
//         int l=0, r=0;

//         int a=-1, b=-1;
//         for(int j=0; j<3; j++){
//             if(i!=j){
//                 if(a==-1) a=j;
//                 b=j;
//             }
//         }
        
//         int x=v[i][0];
//         while(l<r && l<n && r<n){
//             while(x<tot){
//                 r++;
//                 x+=v[i][r];
//             }

//             if(pre[a][l]>x && pre[b][n+1]-pre[b][r]>x){
//                 ans[i].first=l+1;
//                 ans[i].second=r+1;

//                 ans[a].first=1;
//                 ans[a].second=l;

//                 ans[b].first=r+2;
//                 ans[b].second=n+1;

//                 for(int i=0; i<3; i++) cout<<ans[i].first<<" "<<ans[i].second<<" ";
//                 cout<<endl;

//                 return;
//             }
            
//             if(pre[b][l]>x && pre[a][n+1]-pre[a][r]>x){
//                 ans[i].first=l+1;
//                 ans[i].second=r+1;

//                 ans[b].first=1;
//                 ans[b].second=l;

//                 ans[a].first=r+2;
//                 ans[a].second=n+1;

//                 for(int i=0; i<3; i++) cout<<ans[i].first<<" "<<ans[i].second<<" ";
//                 cout<<endl;

//                 return;
//             }

//             while(x>tot){
//                 x-=v[i][l];
//                 l++;
//             }
//         }
//     }

//     cout<<-1<<endl;
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
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> v(3, vector<int>(n));
    for(int i=0; i<3; i++) for(int j=0; j<n; j++) cin>>v[i][j];

    vector<vector<int>> p(3, vector<int>(n+1, 0));
    for(int i=0; i<3; i++) for(int j=0; j<n; j++) p[i][j+1]=p[i][j]+v[i][j];

    int tot=p[0][n], t=(tot+2)/3;
    vector<pair<int, int>> ans(3);

    for(int i=0; i<3; i++){
        int a=-1, b=-1;
        for(int j=0; j<3; j++){
            if(i!=j){
                if(a==-1) a=j;
                else b=j;
            }
        }

        int r=0, s=0;
        for(int l=0; l<n; l++){
            while(r<n && s<t) s+=v[i][r++];

            if(s>=t){
                if(p[a][l]>=t && p[b][n]-p[b][r]>=t){
                    ans[i]={l+1, r};
                    ans[a]={1, l};
                    ans[b]={r+1, n};
                    for(int k=0; k<3; k++) cout<<ans[k].first<<" "<<ans[k].second<<" ";
                    cout<<endl;
                    return;
                }
                if(p[b][l]>=t && p[a][n]-p[a][r]>=t){
                    ans[i]={l+1, r};
                    ans[b]={1, l};
                    ans[a]={r+1, n};
                    for(int k=0; k<3; k++) cout<<ans[k].first<<" "<<ans[k].second<<" ";
                    cout<<endl;
                    return;
                }
            }
            s-=v[i][l];
        }
    }

    cout<<-1<<endl;
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