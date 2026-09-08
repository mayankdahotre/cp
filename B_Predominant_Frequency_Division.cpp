// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> v1;
//     int c1=0, cn1=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==1) c1++;
//         else cn1++;

//         if(c1>=cn1) v1.push_back(i);
//     }

//     for(auto l: v1){
//         int c3=0, cn3=0;
//         for(int i=l+1; i<n-1; i++){
//             if(v[i]==3) c3++;
//             else cn3++;

//             if(c3<=cn3){
//                 cout<<"YES"<<endl;
//                 return;
//             } 
//         }
//     }

//     cout<<"NO"<<endl;
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> p1(n+1,0), p2(n+1,0);

    for(int i=1; i<=n; i++){
        if(v[i-1]==1) p1[i] = 1;
        else p1[i] = -1;

        p1[i]+=p1[i-1];
    }

    for(int i=1; i<=n; i++){
        if(v[i-1]==3) p2[i] = -1;
        else p2[i] = 1;

        p2[i]+=p2[i-1];
    }

    int minp2 = 1e18;
    for(int i=1; i<n; i++){
        if(p1[i]>=0) minp2=min(minp2, p2[i]);
        if(p2[i]>=minp2){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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