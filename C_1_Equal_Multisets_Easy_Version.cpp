// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define yes { cout << "YES" << endl; return; }
// #define no { cout << "NO" << endl; return; }

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     map<int,int> m;
//     for(int i=0; i<n; i++){
//         if(m.count(b[i]) && b[i]!=-1){
//             cout<<"NO"<<endl;
//             return;
//         }
//         m[b[i]]++;
//     }

//     m.clear();

//     if(k<=(n+1)/2){
//         for(int i=0; i<n; i++){
//             if(a[i]!=b[i] || b[i]!=-1){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//     }
//     else{
//         int d=n-k;
//         for(int i=0; i<d; i++){
//             if(b[i]!=a[i] || b[i]!=-1 || b[n-1-i]!=a[n-1-i] || b[n-1-i]!=-1){
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }

//         for(int i=d; i<n-d; i++){
//             m[a[i]]--;
//             m[b[i]]++;
//         }

        // for(auto p: m){
        //     int x=p.first;
        //     int f=p.second;

        //     if(f<0){
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        // }
//     }

//     cout<<"YES"<<endl;
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
    int n, k;
    cin>>n>>k;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    map<int,int> mp;
    for(int i=0; i<n; i++){
        if(b[i]!=-1){
            if(mp.count(b[i])){ cout<<"NO"<<endl; return; }
            mp[b[i]]++;
        }
    }

    mp.clear();

    if(k<=(n+1)/2){
        for(int i=0; i<n; i++){
            if(b[i]!=-1 && b[i]!=a[i]){ cout<<"NO"<<endl; return; }
        }
    }
    else{
        int d=n-k;
        for(int i=0; i<d; i++){
            if((b[i]!=-1 && b[i]!=a[i]) || (b[n-1-i]!=-1 && b[n-1-i]!=a[n-1-i])){
                cout<<"NO"<<endl; return;
            }
        }

        for(int i=d; i<n-d; i++){
            mp[a[i]]--;
            if(b[i]!=-1) mp[b[i]]++;
        }

        int def=0, fr=0;
        for(auto p: mp) if(p.second<0) def+=(-p.second);

        for(int i=d; i<n-d; i++) if(b[i]==-1) fr++;

        if(def>fr){ cout<<"NO"<<endl; return; }
    }

    cout<<"YES"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}