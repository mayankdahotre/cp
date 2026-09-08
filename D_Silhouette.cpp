// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> v3=v;

//     sort(v.begin(), v.end());

//     int sum=0;
//     int val=v[0];
//     int cnt=0;
//     vector<int> v2;
//     for(int i=0; i<n; i++){
//         if(v[i]==val) cnt++;
//         else{
//             int x = v[i]-v[i-1];
//             if(x%cnt){
//                 cout<<-1<<endl;
//                 return;
//             }
//             else{
//                 int y = x/cnt;
//                 if(v2.empty()) v2.push_back(y);
//                 else if(v2.back()>y){
//                     cout<<-1<<endl;
//                     return;
//                 }
//             }
//             sum=v[i];
//             cnt=1;
//             val=v[i];
//         }
//     }
//     v2.push_back(v2.back()+1);

//     v.erase(unique(v.begin(), v.end()), v.end());
//     map<int,int> mp;
//     for(int i=0; i<v.size(); i++) mp[v[i]]=v2[i];

//     for(int i=0; i<n; i++) v3[i]=mp[v3[i]];

//     for(int i=0; i<n; i++) cout<<v3[i]<<" ";
//     cout<<endl;
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
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     vector<int> v3 = v;

//     sort(v.begin(), v.end());

//     if(v[0]==v.back() && v[0]){
//         cout<<-1<<endl;
//         return;
//     }

//     int val = v[0];
//     int cnt = 0;
//     vector<int> v2;

//     for(int i = 0; i < n; i++) {
//         if(v[i] == val) cnt++;
//         else {
//             int x = v[i] - v[i-1];

//             if(x % cnt) {
//                 cout << -1 << endl;
//                 return;
//             }

//             int y = x / cnt;

//             if(v2.empty()) v2.push_back(y);
//             else {
//                 if(v2.back() > y) {
//                     cout << -1 << endl;
//                     return;
//                 }
//                 v2.push_back(y);
//             }

//             cnt = 1;
//             val = v[i];
//         }
//     }

//     // Handle the last distinct value
//     if(v2.empty())
//         v2.push_back(1);
//     else
//         v2.push_back(v2.back() + 1);

//     v.erase(unique(v.begin(), v.end()), v.end());

//     map<int,int> mp;
//     for(int i = 0; i < (int)v.size(); i++)
//         mp[v[i]] = v2[i];

//     for(int i = 0; i < n; i++)
//         v3[i] = mp[v3[i]];

//     for(int i = 0; i < n; i++)
//         cout << v3[i] << " ";
//     cout << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while(T--)
//         solve();
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
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> v3 = v;

    sort(v.begin(), v.end());

    int sum = 0;
    int val = v[0];
    int cnt = 0;

    vector<int> v2;
    vector<int> val2;

    for(int i = 0; i < n; i++) {
        if(v[i] == val) cnt++;
        else {
            val2.push_back(val);

            if(val != sum) {
                cout << -1 << endl;
                return;
            }

            int x = v[i] - v[i-1];

            if(x % cnt) {
                cout << -1 << endl;
                return;
            }

            int y = x / cnt;

            if(y <= 0) {
                cout << -1 << endl;
                return;
            }

            v2.push_back(y);

            sum += y * cnt;

            cnt = 1;
            val = v[i];
        }
    }

    val2.push_back(val);

    if(val != sum) {
        cout << -1 << endl;
        return;
    }

    if(v2.empty()) v2.push_back(1);
    else v2.push_back(v2.back() + 1);

    map<int,int> mp;
    for(int i = 0; i < val2.size(); i++)
        mp[val2[i]] = v2[i];

    for(int i = 0; i < n; i++)
        v3[i] = mp[v3[i]];

    if(!is_sorted(v2.begin(), v2.end())){
        cout<<-1<<endl;
        return;
    }

    for(int i = 0; i < n; i++)
        cout << v3[i] << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) solve();

    return 0;
}