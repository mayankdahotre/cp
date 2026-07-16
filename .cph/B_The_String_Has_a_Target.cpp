// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     map<char,pair<int,int>> f;
//     for(int i=0; i<s.length(); i++){
//         f[s[i]].first++;
//         f[s[i]].second=i;
//     }

//     for(int i=0; i<26; i++){
//         if((f['a'+i]).first!=0){
//             if(f['a'+i].first-1!=f['a'+i].second){
//                 s = (char)('a'+i)+s.substr(0,f['a'+i].second-1)+s.substr(f['a'+i].second);
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     cout<<s<<endl;
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
    cin >> s;

    map<char, pair<int, int>> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]].first++;
        mp[s[i]].second = i;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (mp[c].first != 0) {
            int cnt = mp[c].first;
            int idx = mp[c].second;
            if (cnt - 1 != idx) {
                s = s[idx] + s.substr(0, idx) + s.substr(idx + 1);
            }
            break;
        }
    }

    cout << s << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
