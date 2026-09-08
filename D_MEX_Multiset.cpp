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

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int mex1=-1, mex2=-1, mex3=-1;
//     int mx = *max_element(v.begin(), v.end());
    
//     vector<int> v2(mx,0);
//     for(int i=0; i<n; i++) v2[v[i]]++;

//     for(int i=1; i<mx; i++){
//         v2[i]=min(v2[i], v2[i-1]);
//         if(v2[i]==0) break;
//     }

//     for(int i=mx-1; i>=0; i--){
//         if(v2[i]>=1 && mex1==-1) mex1=i+1;
//         if(v2[i]>=2 && mex2==-1) mex2=i+1;
//         if(v2[i]>=3 && mex3==-1) mex3=i+1; 
//     }

//     if(mex1==-1) mex1=0;
//     if(mex2==-1) mex2=0;
//     if(mex3==-1) mex3=0;

//     if(mex1-mex2>1){
//         if(mex3){
//             yes;
//             string s;
//             for(int i=0; i<n; i++){
//                 if(v[i]<mex3){
//                     if(v2[v[i]]>=3) s[i]+='A';
//                     else if(v2[v[i]]==2) s[i]+='B';
//                     else s[i]+='C';
//                 }
//                 else if(v[i]<mex2){
//                     if(v2[v[i]]>=2) s[i]+='A';
//                     if(v2[v[i]]) s[i]+='B';
//                 }
//                 else if(v[i]==mex2) s[i]+='B';
//                 else s[i]+='A';
//             }

//             cout<<s<<endl;
//             return;
//         }
//         else no;
//     }
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

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int mex1=-1, mex2=-1, mex3=-1;
//     int mx = *max_element(v.begin(), v.end());
    
//     vector<int> v2(mx + 1, 0);
//     for(int i=0; i<n; i++) v2[v[i]]++;

//     for(int i=1; i<mx; i++){
//         v2[i]=min(v2[i], v2[i-1]);
//         if(v2[i]==0) break;
//     }

//     for(int i=mx-1; i>=0; i--){
//         if(v2[i]>=1 && mex1==-1) mex1=i+1;
//         if(v2[i]>=2 && mex2==-1) mex2=i+1;
//         if(v2[i]>=3 && mex3==-1) mex3=i+1; 
//     }

//     if(mex1==-1) mex1=0;
//     if(mex2==-1) mex2=0;
//     if(mex3==-1) mex3=0;

//     debug(mex1);
//     debug(mex2);
//     debug(mex3);
//     cout<<endl;

//     if(mex1-mex2>1){
//         if(mex3){
//             yes;
//             string s(n, ' ');
//             for(int i=0; i<n; i++){
//                 if(v[i]<mex3){
//                     if(v2[v[i]]>=3) s[i]='A';
//                     else if(v2[v[i]]==2) s[i]='B';
//                     else s[i]='C';
//                 }
//                 else if(v[i]<mex2){
//                     if(v2[v[i]]>=2) s[i]='A';
//                     if(v2[v[i]]) s[i]='B';
//                 }
//                 else if(v[i]==mex2) s[i]='B';
//                 else s[i]='A';
//             }

//             cout<<s<<endl;
//             return;
//         }
//         else no;
//     }
//     else no;
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

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int mex1=-1, mex2=-1, mex3=-1;
//     int mx = *max_element(v.begin(), v.end());
    
//     vector<int> f(mx + 1, 0);
//     for(int i=0; i<n; i++) f[v[i]]++;

//     vector<int> v2 = f;
//     for(int i=1; i<=mx; i++){
//         v2[i]=min(v2[i], v2[i-1]);
//     }

//     string s(n,' ');
//     for(int i=0; i<n; i++){
//         if(v2[i]<f[i])
//     }

//     for(int i=1; i<mx; i++){
//         v2[i]=min(v2[i], v2[i-1]);
//         if(v2[i]==0) break;
//     }

    
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

    vector<int> v(n);
    map<int,int> cnt;
    for(int i=0; i<n; i++){
        cin>>v[i];
        cnt[v[i]]++;
    }

    if(cnt[0]==0){
        yes;
        cout<<string(n, 'A')<<endl;
        return;
    }

    if(cnt[0]==1){
        no;
        return;
    }

    yes;
    int m3=0, m2=0, m1=0;
    while(cnt[m3]>=3) m3++;
    while(cnt[m2]>=2) m2++;
    while(cnt[m1]>=1) m1++;

    int M3 = m3;
    int M2 = m2;
    int M1 = min(m1, M2 + M3);

    vector<bool> needA(M1, true), needB(M2, true), needC(M3, true);
    string s(n, ' ');

    for(int i=0; i<n; i++){
        int x = v[i];
        if(x<M1 && needA[x]){
            s[i] = 'A';
            needA[x] = false;
        }
        else if(x<M2 && needB[x]){
            s[i] = 'B';
            needB[x] = false;
        }
        else if(x<M3 && needC[x]){
            s[i] = 'C';
            needC[x] = false;
        }
        else{
            if(x==M1 && M1==M2) s[i] = 'C';
            else if(x==M1) s[i] = 'B';
            else s[i] = 'A';
        }
    }

    cout<<s<<endl;
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