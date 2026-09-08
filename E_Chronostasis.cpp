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

//     vector<int> p, np;
//     for(int i=0; i<n; i++){
//         if(v[i]<=0) np.push_back(v[i]);
//         else p.push_back(v[i]);
//     }

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     if(sum<=0){
//         cout<<-1<<endl;
//         return;
//     }

//     sort(p.begin(), p.end());
//     sort(np.begin(), np.end(), greater<int>());


//     vector<int> res;
//     int x=p[0], i=1, j=0;
//     res.push_back(p[0]);
//     while(i<p.size() && j<np.size()){
//         if(x+np[j]<=0 && i<p.size()){
//             x+=p[i];
//             i++;
//         }
//         else if(j<np.size()){
//             x+=np[j];
//             j++;
//         }
        
//         res.push_back(x);
//     }

//     for(int i=0; i<n; i++) cout<<res[i]<<" ";
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

//     vector<int> p, np;
//     for(int i=0; i<n; i++){
//         if(v[i]<=0) np.push_back(v[i]);
//         else p.push_back(v[i]);
//     }

//     if(p.empty()){
//         cout<<-1<<endl;
//         return;
//     }

//     sort(p.begin(), p.end());
//     sort(np.begin(), np.end());

//     vector<int> res;
//     int x = p[0];
//     res.push_back(x);

//     int i = 1, j = 0;
//     while(i < p.size() || j < np.size()){
//         if(j < np.size() && x + np[j] >0){
//             x += np[j];
//             j++;
//         }
//         else if(i < p.size()){
//             x += p[i];
//             i++;
//         }
//         else{
//             cout<<-1<<endl;
//             return;
//         }
//         res.push_back(x);
//     }

//     for(int k=0; k<n; k++) cout<<res[k]<<" ";
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

//     vector<int> p;
//     multiset<int> np;
//     for(int i=0; i<n; i++){
//         if(v[i]<=0) np.insert(v[i]);
//         else p.push_back(v[i]);
//     }

//     if(p.empty()){
//         cout<<-1<<endl;
//         return;
//     }

//     sort(p.begin(), p.end());

//     vector<int> res;
//     int x = p[0];
//     res.push_back(x);

//     int i = 1;
//     while(i < p.size() || !np.empty()){
//         auto it = np.lower_bound(1 - x);
//         if(it != np.end()){
//             x += *it;
//             np.erase(it);
//         }
//         else if(i < p.size()){
//             x += p[i];
//             i++;
//         }
//         else{
//             cout<<-1<<endl;
//             return;
//         }
//         res.push_back(x);
//     }

//     for(int k=0; k<n; k++) cout<<res[k]<<" ";
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
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> p;
    multiset<int> np;
    for(int i=0; i<n; i++){
        if(v[i]>0) p.push_back(v[i]);
        else np.insert(v[i]); 
    }

    if(p.empty()){
        cout<<-1<<endl;
        return;
    }

    sort(p.begin(), p.end());

    vector<int> res = {p[0]};
    int i=1, x=p[0];

    while(i<p.size() || !np.empty()){
        auto it = np.lower_bound(1-x);

        if(it != np.end()){
            x+=*it;
            np.erase(it);
        }
        else if(i<p.size()){
            x+=p[i];
            i++;
        }
        else{
            cout<<-1<<endl;
            return;
        }

        res.push_back(x);
    }

    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<endl;
    
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