// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // void solve() {
// //     string s;
// //     cin >> s;

// //     int num = 0;
// //     for (int i = 0; i < s.length();) {
// //         char c = s[i];
// //         auto it = s.find(c, i);
// //         auto it2 = s.find(c, it + 1); 

// //         if (it2 != string::npos) {
// //             num += it2-it-1;
// //             i = it2+1;
// //         } else { 
// //            i++; 
// //            num++; 
// //            continue;
// //         }
// //     }

// //     cout << num << endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;
// //     while (T--) {
// //         solve();
// //     }
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin >> s;

//     int num = 0;
//     for (int i = 0; i < s.length();) {
//         char c = s[i];
//         auto it = s.find(c, i);
//         auto it2 = s.find(c, it + 1);

//         if (it2 != string::npos) {
//             num += it2 - it -1;
//             i = it2 + 1; 
//         } else {
//             num ++;
//             i++; 
//             continue;
//         }
//     }

//     cout << num << endl;
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
    int sz = 26;
    string s;
    cin >> s;
    int m = 0, n = (int)s.size();
    vector<bool>prev(sz, false);
    for(auto &i : s){
        if(prev[i - 'a']){
            m += 2;
            for(int j = 0; j < sz; j++) prev[j] = false;
        }
        else prev[i - 'a'] = true;
    }
 
    cout << n - m << endl;
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