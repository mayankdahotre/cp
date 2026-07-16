// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     char U,u;
//     string s2;
//     for(auto i: s){
//         s2+=i;
//         if(i=='b'){
//             for(auto it=s2.rbegin(); it!=s2.rend(); it--){
//                 if(i!='b' && i-'a'>=0 && i-'a'<=25){
//                     s2-=it;
//                 }
//             }
//         }
//         if(i=='B'){
//             for(auto it=s2.rbegin(); it!=s2.rend(); it--){
//                 if(it!='B' && it-'A'>=0 && it-'A'<=25){
//                     s2-=it;
//                 }
//             }
//         }
//     }

//     cout<<s2<<endl;
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
    string s;
    cin >> s;

    string s2;
    for (char i : s) {
        if (i == 'b') {
            if (!s2.empty()) {
                auto it = find_if(s2.rbegin(), s2.rend(), [](char c) { return islower(c); });
                if (it != s2.rend()) {
                    s2.erase((it + 1).base() - 1);
                }
            }
        } else if (i == 'B') {
            if (!s2.empty()) {
                auto it = find_if(s2.rbegin(), s2.rend(), [](char c) { return isupper(c); });
                if (it != s2.rend()) {
                    s2.erase((it + 1).base() - 1);
                }
            }
        } else {
            s2 += i;
        }
    }

    cout << s2 << endl;
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
