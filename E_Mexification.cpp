// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// bool n0(vector<int> v){
//     int res=0;
//     for(int i=0; i<v.size(); i++) if(v[i]==0) return res++;
//     return res;
// }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(!n0){
//         cout<<k/2<<endl;
//         return;
//     }
//     else{
//         set<int> s;
//         for(int i=0; i<n; i++) s.insert(v[i]);

//         int mex=0;
//         while(s.find(mex)!=s.end()) mex++;

//         map<int,int> f;
//         for(int i=0; i<n; i++) f[v[i]]++;

//         int ans=0;
//         for(auto p: f){
//             if(p.second==1) ans+=p.first;
//             else ans+=mex;
//         }

//         ans+=(k-1)/2;
        
//         cout<<ans<<endl;
//         return;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans=0;

    int m = min(k,2);
    k-=m;

    // sort(v.begin(), v.end());

    while(m--){
        set<int> s;
        for(int i=0; i<n; i++) s.insert(v[i]);

        int mex=0;
        while(s.find(mex)!=s.end()) mex++;
        map<int,int> f;
        for(int i=0; i<n; i++) f[v[i]]++;

        int ans=0;
        for(auto p: f){
            if(p.first<mex){
                if(p.second==1) ans+=p.first;
                else ans+=mex;
            }
            else ans+=mex;
        }

        for(int i=0; i<n; i++){
            if(v[i]>=mex) v[i]=mex;
            ans+=v[i];
        }
    }

    set<int> s;
    for(int i=0; i<n; i++) s.insert(v[i]);

    int mex=0;
    while(s.find(mex)!=s.end()) mex++;

    int x=0;
    for(int i=0; i<n; i++) x+=v[i];

    ans+=k/2*(n-mex);
    
    cout<<ans<<endl;
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