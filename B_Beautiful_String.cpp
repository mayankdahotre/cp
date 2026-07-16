// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     string r = s;
//     reverse(r.begin(), r.end());

//     if(s==r){
//         cout<<0<<endl;
//         cout<<endl;
//     }

//     int n0=0, n1=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='0') n0++;
//         else n1++;
//     }

//     if(n0<=n1){
//         string temp;

//         cout<<n0<<endl;
//         for(int i=0; i<n; i++){
//             if(s[i]=='1') cout<<i+1<<" ";
//             else temp+=s[i];
//         }
//         // cout<<temp<<endl;
//         cout<<endl;
        
//     }    

//     if(n1<n0){
//         string temp;

//         cout<<n1<<endl;
//         for(int i=0; i<n; i++){
//             if(s[i]=='0') cout<<i+1<<" ";
//             else temp+=s[i];
//         }
//         // cout<<temp<<endl;
//         cout<<endl;
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

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    string r = s;
    reverse(r.begin(), r.end());

    if(s==r){
        cout<<0<<endl;
        cout<<endl;
        return;
    }

    vector<int> v;

    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            v.push_back(i+1);
        }
    }

    cout<<v.size()<<endl;
    for(auto x: v) cout<<x<<" ";
    cout<<endl;
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