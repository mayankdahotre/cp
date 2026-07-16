// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     int num=0;
//     set<int> z, o;
//     vector<int> ans(n);

//     for(int i=0; i<n; i++){
//         if(s[i]=='1'){
//             if(z.size()){
//                 ans[i]=z.begin();
//                 z.remove(z.begin());
//                 o.push(i);
//             }
//             else{
//                 o.insert(i);
//                 num++;
//             }
//         }
//         else{
//             if(o.size()){
//                 ans[i]=o.begin();
//                 o.remove(o.begin());
//                 z.push(i);
//             }
//             else{
//                 z.insert(i);
//                 num++;
//             }
//         }
//     }

//     cout<<num<<endl;
//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int num=0;
    vector<int> z, o; 
    vector<int> ans(n);

    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            if(z.size()){
                int sub_id = z.back(); 
                z.pop_back();
                
                ans[i] = sub_id;
                o.push_back(sub_id);
            }
            else{
                num++;
                ans[i] = num;
                o.push_back(num);
            }
        }
        else{
            if(o.size()){
                int sub_id = o.back();
                o.pop_back();
                
                ans[i] = sub_id;
                z.push_back(sub_id); 
            }
            else{
                num++;
                ans[i] = num;
                z.push_back(num);
            }
        }
    }

    cout<<num<<endl;
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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