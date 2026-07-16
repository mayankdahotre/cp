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

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     vector<vector<int>> ids(4);

//     for(int i=0; i<n; i++){
//         if(mp[v[i]]>=2) ids[0].push_back(v[i]);
//         if(mp[v[i]]>=4) ids[1].push_back(v[i]);
//         if(mp[v[i]]>=6) ids[i].push_back(v[i]);
//         if(mp[v[i]]>=8) ids[2].push_back(v[i]);
//     }

//     if(ids[0].size()>=4){
//         cout<<"YES"<<endl;
//         int sz = ids[0].size();
//         cout<<ids[0][0]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][0]<<" "<<ids[0][sz-1]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-1]<<" ";
//         cout<<endl;
//         return;
//     }
//     else if(ids[1].size()>=1){
//         if(ids[0].size()>=3 && ids[1].size()==1){
//             cout<<"YES"<<endl;

//             int a,b;
//             for(int i=0; i<ids[0].size(); i++){
//                 if(ids[0][i]!=ids[1][0]){
//                     if(a==-1){
//                         a=ids[0][i];
//                         continue;
//                     }
//                     else{
//                         b=ids[0][i];
//                         break;
//                     }
//                 }
//             }

//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[2].size()>=1){
//         if(ids[0].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<ids[0].size(); i++){
//                 if(ids[0][i]!=ids[2][0]){
//                     if(a==-1){
//                         a=ids[0][i];
//                         break;
//                     }
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<ids[1].size(); i++){
//                 if(ids[1][i]!=ids[2][0]){
//                     if(a==-1){
//                         a=ids[0][i];
//                         break;
//                     }
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[3].size()>=1){
//         cout<<"YES"<<endl;
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<endl;
//         return;
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

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     vector<vector<int>> ids(4);

//     for(int i=0; i<(int)v.size(); i++){
//         if(mp[v[i]]>=2) ids[0].push_back(v[i]);
//         if(mp[v[i]]>=4) ids[1].push_back(v[i]);
//         if(mp[v[i]]>=6) ids[2].push_back(v[i]);
//         if(mp[v[i]]>=8) ids[3].push_back(v[i]);
//     }

//     if(ids[0].size()>=4){
//         cout<<"YES"<<endl;
//         int sz = ids[0].size();
//         cout<<ids[0][0]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][0]<<" "<<ids[0][sz-1]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-1]<<" ";
//         cout<<endl;
//         return;
//     }
//     else if(ids[1].size()>=1){
//         if(ids[0].size()>=3 && ids[1].size()==1){
//             cout<<"YES"<<endl;

//             int a=INT_MIN,b=INT_MIN;
//             for(int i=0; i<(int)ids[0].size(); i++){
//                 if(ids[0][i]!=ids[1][0]){
//                     if(a==-1){
//                         a=ids[0][i];
//                         continue;
//                     }
//                     else{
//                         b=ids[0][i];
//                         break;
//                     }
//                 }
//             }

//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[2].size()>=1){
//         if(ids[0].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<(int)ids[0].size(); i++){
//                 if(ids[0][i]!=ids[2][0]){
//                     a=ids[0][i];
//                     break;
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<(int)ids[1].size(); i++){
//                 if(ids[1][i]!=ids[2][0]){
//                     a=ids[1][i];
//                     break;
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[2].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[3].size()>=1){
//         cout<<"YES"<<endl;
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<endl;
//         return;
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

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     vector<vector<int>> ids(4);

//     for(int i=0; i<(int)v.size(); i++){
//         if(mp[v[i]]>=2) ids[0].push_back(v[i]);
//         if(mp[v[i]]>=4) ids[1].push_back(v[i]);
//         if(mp[v[i]]>=6) ids[2].push_back(v[i]);
//         if(mp[v[i]]>=8) ids[3].push_back(v[i]);
//     }

//     if(ids[3].size()>=1){
//         cout<<"YES"<<endl;
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<endl;
//         return;
//     }
//     else if(ids[2].size()>=1){
//         if(ids[2].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<(int)ids[1].size(); i++){
//                 if(ids[1][i]!=ids[2][0]){
//                     a=ids[1][i];
//                     break;
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[0].size()>=2){
//             int a=INT_MIN;
//             for(int i=0; i<(int)ids[0].size(); i++){
//                 if(ids[0][i]!=ids[2][0]){
//                     a=ids[0][i];
//                     break;
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<ids[2][0]<<" "<<a<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[1].size()>=1){
//         if(ids[1].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[0].size()>=3){

//             int a=INT_MIN, b=INT_MIN;
//             for(int i=0; i<(int)ids[0].size(); i++){
//                 if(ids[0][i]!=ids[1][0]){
//                     if(a==INT_MIN){
//                         a=ids[0][i];
//                         continue;
//                     }
//                     else{
//                         b=ids[0][i];
//                         break;
//                     }
//                 }
//             }
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<ids[1][0]<<" "<<a<<" ";
//             cout<<ids[1][0]<<" "<<b<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     // ids[0]: need 4 distinct values each with count>=2
//     else if(ids[0].size()>=4){
//         cout<<"YES"<<endl;
//         int sz = ids[0].size();
//         cout<<ids[0][0]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-2]<<" ";
//         cout<<ids[0][0]<<" "<<ids[0][sz-1]<<" ";
//         cout<<ids[0][1]<<" "<<ids[0][sz-1]<<" ";
//         cout<<endl;
//         return;
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

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     vector<vector<int>> ids(4);

//     for(int i=0; i<(int)v.size(); i++){
//         if(mp[v[i]]>=8) ids[3].push_back(v[i]);
//         else if(mp[v[i]]>=6) ids[2].push_back(v[i]);
//         else if(mp[v[i]]>=4) ids[1].push_back(v[i]);
//         else if(mp[v[i]]>=2) ids[0].push_back(v[i]);
//     }

//     if(ids[3].size()>=1){
//         cout<<"YES"<<endl;
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<ids[3][0]<<" "<<ids[3][0]<<" ";
//         cout<<endl;
//         return;
//     }
//     else if(ids[2].size()>=1){
//         if(ids[2].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][1]<<" ";
//             cout<<ids[2][1]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][1]<<" "<<ids[2][1]<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[1].size()>=1){
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[1][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[1][0]<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[0].size()>=1){
//             cout<<"YES"<<endl;
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[2][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[0][0]<<" ";
//             cout<<ids[2][0]<<" "<<ids[0][0]<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[1].size()>=1){
//         if(ids[1].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<ids[1][0]<<" ";
//             cout<<ids[1][0]<<" "<<ids[1][1]<<" ";
//             cout<<ids[1][1]<<" "<<ids[1][0]<<" ";
//             cout<<ids[1][1]<<" "<<ids[1][1]<<" ";
//             cout<<endl;
//             return;
//         }
//         else if(ids[0].size()>=2){
//             cout<<"YES"<<endl;
//             cout<<ids[1][0]<<" "<<ids[0][0]<<" ";
//             cout<<ids[1][0]<<" "<<ids[0][0]<<" ";
//             cout<<ids[1][0]<<" "<<ids[0][1]<<" ";
//             cout<<ids[1][0]<<" "<<ids[0][1]<<" ";
//             cout<<endl;
//             return;
//         }
//     }
//     else if(ids[0].size()>=4){
//         cout<<"YES"<<endl;
//         int sz = ids[0].size();
//         cout<<ids[0][0]<<" "<<ids[0][1]<<" ";
//         cout<<ids[0][0]<<" "<<ids[0][sz-1]<<" ";
//         cout<<ids[0][sz-2]<<" "<<ids[0][1]<<" ";
//         cout<<ids[0][sz-2]<<" "<<ids[0][sz-1]<<" ";
//         cout<<endl;
//         return;
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
    int n;;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    vector<int> v2;
    for(auto p: mp){
        int i = p.first;
        int f = p.second;

        f/=2;
        while(f--) v2.push_back(i);
    }

    if(v2.size()<4){
        cout<<"NO"<<endl;
        return;
    }

    int m=v2.size();
    int a=v2[0], b=v2[1], c=v2[m-2], d=v2[m-1];

    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<a<<" "<<d<<" "<<c<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
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