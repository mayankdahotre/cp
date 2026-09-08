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

// bool cmp(string a, string b){
//     return a.length()<=b.length();
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<string> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     map<int,vector<string>> odd, even;
//     vector<int> leno, lene;
//     for(int i=0; i<n; i++){
//         if(v[i].length()%2) odd[v[i].length()].push_back(v[i]);
//         else even[v[i].length()].push_back(v[i]);

//         if(v[i]%length()%2) leno.insert(v[i].length());
//         else lene.insert(v[i].length());
//     }

//     int ans=n;

//     sort(odd.begin(), odd.end(), cmp);
//     sort(even.begin(), even.end(), cmp);

//     sort(leno.begin(), leno.end());
//     sort(lene.begin(), lene.end());
    
//     leno.erase(unique(leno.begin(), leno.end()), leno.end());
//     lene.erase(unique(lene.begin(), lene.end()), lene.end());

//     for(int i=0; i<leno.size(); i++){
//         for(int j=i+1; j<leno.size(); j++){
//             map<int> lo;
//             for(string k: odd[leno[i]]){
//                 int x=0;
//                 for(auto c: k) x+=c-'0';
//                 lo[x]++;
//             }

//             map<int> hi;
//             int m = (leno[i]+leno[j])/2;
//             for(int k: odd[leno[j]]){
//                 int x=0, y=0;
//                 for(int l=0; l<m; l++){
//                     x+=k[l];
//                     y+=k[leno[j]-1-l];
//                 }
//                 for(int l=m+1; l<leno[j]; l++){
//                     x-=k[l];
//                     y-=k[leno[j]-1-l];
//                 }
//                 x=max(x,0LL);
//                 y=max(y,0LL);

//                 ans+=lo[x];
//                 ans+=lo[y];
//             }
//         }
//     }

//     for(int i=0; i<lene.size(); i++){
//         for(int j=i+1; j<lene.size(); j++){
//             map<int> lo;
//             for(string k: even[lene[i]]){
//                 int x=0;
//                 for(auto c: k) x+=c-'0';
//                 lo[x]++;
//             }

//             map<int> hi;
//             int m = (lene[i]+lene[j])/2;
//             for(int k: even[lene[j]]){
//                 int x=0, y=0;
//                 for(int l=0; l<m; l++){
//                     x+=k[l];
//                     y+=k[lene[j]-1-l];
//                 }
//                 for(int l=m+1; l<leno[j]; l++){
//                     x-=k[l];
//                     y-=k[lene[j]-1-l];
//                 }
//                 x=max(x,0LL);
//                 y=max(y,0LL);

//                 ans+=lo[x];
//                 ans+=lo[y];
//             }
//         }
//     }

//     cout<<ans<<endl;
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

    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,vector<string>> odd, even;
    vector<int> leno, lene;
    for(int i=0; i<n; i++){
        if(v[i].length()%2){
            odd[v[i].length()].push_back(v[i]);
            leno.push_back(v[i].length());
        }else{
            even[v[i].length()].push_back(v[i]);
            lene.push_back(v[i].length());
        }
    }

    int ans=0;

    sort(leno.begin(), leno.end());
    sort(lene.begin(), lene.end());
    
    leno.erase(unique(leno.begin(), leno.end()), leno.end());
    lene.erase(unique(lene.begin(), lene.end()), lene.end());

    for(int i=0; i<leno.size(); i++){
        for(int j=i; j<leno.size(); j++){
            map<int,int> lo;
            for(string k: odd[leno[i]]){
                int x=0;
                for(auto c: k) x+=c-'0';
                lo[x]++;
            }

            int l1=leno[i], l2=leno[j];
            int m=(l1+l2)/2;
            for(string k: odd[l2]){
                int x=0, y=0;
                for(int l=m-l1; l<l2; l++) x+=k[l]-'0';
                for(int l=0; l<m-l1; l++) x-=k[l]-'0';

                if(x>=0) ans+=lo[x];

                if(l1<l2){
                    for(int l=0; l<m; l++) y+=k[l]-'0';
                    for(int l=m; l<l2; l++) y-=k[l]-'0';
                    if(y>=0) ans+=lo[y];
                }
            }
        }
    }

    for(int i=0; i<lene.size(); i++){
        for(int j=i; j<lene.size(); j++){
            map<int,int> lo;
            for(string k: even[lene[i]]){
                int x=0;
                for(auto c: k) x+=c-'0';
                lo[x]++;
            }

            int l1=lene[i], l2=lene[j];
            int m=(l1+l2)/2;
            for(string k: even[l2]){
                int x=0, y=0;
                for(int l=m-l1; l<l2; l++) x+=k[l]-'0';
                for(int l=0; l<m-l1; l++) x-=k[l]-'0';

                if(x>=0) ans+=lo[x];

                if(l1<l2){
                    for(int l=0; l<m; l++) y+=k[l]-'0';
                    for(int l=m; l<l2; l++) y-=k[l]-'0';
                    if(y>=0) ans+=lo[y];
                }
            }
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}