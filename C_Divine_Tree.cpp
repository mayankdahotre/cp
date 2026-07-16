// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     if(m<n || m>n*(n+1)/2){
//         cout<<-1<<endl;
//         return;
//     }

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=n-i;

//     int del = n*(n+1)/2 - m;

//     // debug(del);

//     for(int i=0; i<n; i++){
//         int take = min(v[i]-1, del);
//         v[i]-=take;
//         del-=take;

//         // debug(v[i]);
//         // debug(del);
//     }

//     sort(v.begin(), v.end(), greater<int>());

//     // debugv(v);

//     vector<vector<int>> tstr;

//     vector<int> v2 = v;
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());

//     // debugv(v2);

//     for(auto i: v2) tstr.push_back({i});

//     map<int,int> mp;
//     for(int i=0; i<v.size(); i++) mp[v[i]]++;

//     cout<<n-1<<endl;

//     for(int i=0; i<v2.size()-1; i++) cout<<v2[i]<<" "<<v2[i+1]<<endl;

//     int x=n;
//     int j=0;

//     // debug(x);

//     for(int i=0; i<v2.size(); i++){
//         int prev = v2[i];
//         int nxt = x;
//         mp[v2[i]]--;

//         // debug(prev);
//         // debug(nxt);

//         // debug(mp[v2[i]]);

//         while(mp[v2[i]]--){
//             cout<<prev<<" "<<nxt<<endl;
//             prev=x;
//             nxt=x-1;
//             x--;
//         }
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







// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     if(m<n || m>n*(n+1)/2){
//         cout<<-1<<endl;
//         return;
//     }

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=n-i;

//     int del = n*(n+1)/2 - m;

//     // debug(del);

//     for(int i=0; i<n; i++){
//         int take = min(v[i]-1, del);
//         v[i]-=take;
//         del-=take;

//         // debug(v[i]);
//         // debug(del);
//     }

//     sort(v.begin(), v.end(), greater<int>());

//     // debugv(v);

//     vector<vector<int>> tstr;

//     vector<int> v2 = v;
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());

//     // debugv(v2);

//     for(auto i: v2) tstr.push_back({i});

//     map<int,int> mp;
//     for(int i=0; i<v.size(); i++) mp[v[i]]++;

//     cout<<n-1<<endl;

//     for(int i=0; i<v2.size()-1; i++) cout<<v2[i]<<" "<<v2[i+1]<<endl;

//     sort(v2.begin(), v2.end());

//     vector<int> v3;
//     int j=0;
//     for(int i=0; i<n; i++){
//         if(v2[j]==i+1){
//             j++;
//             continue;
//         }
//         else v3.push_back(i+1);
//     }

//     j=0;
//     for(int i=0; i<v2.size(); i++){
//         int prev = v2[i];
//         int nxt = v3[j];
//         mp[v2[i]]--;

//         // debug(prev);
//         // debug(nxt);

//         // debug(mp[v2[i]]);

//         while(mp[v2[i]]--){
//             cout<<prev<<" "<<nxt<<endl;
//             prev=v3[j];
//             nxt=v3[j+1];
//             j++;
//         }
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
    int n, m;
    cin>>n>>m;

    if(m<n || m>n*(n+1)/2){
        cout<<-1<<endl;
        return;
    }

    vector<int> v(n);
    for(int i=0; i<n; i++) v[i]=n-i;

    int del = n*(n+1)/2 - m;

    for(int i=0; i<n; i++){
        int take = min(v[i]-1, del);
        v[i]-=take;
        del-=take;
    }

    sort(v.begin(), v.end(), greater<int>());

    vector<vector<int>> tstr;

    vector<int> v2 = v;
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for(auto i: v2) tstr.push_back({i});

    map<int,int> mp;
    for(int i=0; i<v.size(); i++) mp[v[i]]++;

    cout<<v2[0]<<endl;

    for(int i=0; i<v2.size()-1; i++) cout<<v2[i]<<" "<<v2[i+1]<<endl;

    sort(v2.begin(), v2.end());

    vector<int> v3;
    int j=0;

    for(int i=0; i<n; i++){
        if(j < (int)v2.size() && v2[j]==i+1){
            j++;
            continue;
        }
        else v3.push_back(i+1);
    }

    j=0;

    for(int i=0; i<v2.size(); i++){
        int prev = v2[i];

        mp[v2[i]]--;

        while(mp[v2[i]] > 0){
            if(j >= (int)v3.size()) break;

            cout<<prev<<" "<<v3[j]<<endl;

            prev = v3[j];
            j++;

            mp[v2[i]]--;
        }
    }

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