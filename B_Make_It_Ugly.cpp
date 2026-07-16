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

//     int a1=0;
//     for(int i=0; i<n; i++) if(v[i]==v[0]) a1++;
    
//     int a2=0;
//     for(int i=n-1; i>=0; i--) if(v[i]==v[n-1]) a2++;

//     if(a1==n){
//         cout<<-1<<endl;
//         return;
//     }

//     int ans=min(a1,a2);

//     vector<int> v2 = v;
//     // sort(v2.begin(), v2.end());
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());

//     int c=0;
//     for(int i=0; i<v2.size()-2; i++){
//         if(v2[i]==v2[i+2]) c++;
//     }

//     if(c==1){
//         cout<<ans<<endl;
//         return;
//     }

//     if(c==0){
//         cout<<0<<endl;
//         return;
//     }

//     vector<int> len;
//     int l=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==v2[j]) l++;
//         else{
//             len.push_back(l);
//             l=0;
//             j++;
//         }
//     }
//     len.push_back(l);

//     bool ok = true;
//     for(int i=1; i<len.size()-1; i++) if(len[i]>1) ok = false;

//     if(ok){
//         if(c==len.size()-2){
//             cout<<1<<endl;
//             return;
//         }
//         else{
//             cout<<0<<endl;
//             return;
//         }
//     }
//     else{
//         cout<<0<<endl;
//         return;
//     }
    
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

    int a1=0;
    for(int i=0; i<n; i++) if(v[i]==v[0]) a1++;

    if(a1==n){
        cout<<-1<<endl;
        return;
    }

    int ans=n;
    int c=0; 

    for(int i=0; i<n; i++){
        if(v[i]==v[0]){
            c++;
        } else {
            ans=min(ans, c);
            c=0;
        }
    }
    ans=min(ans, c); 

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