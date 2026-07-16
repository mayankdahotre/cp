// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     int c4= count(s.begin(), s.end(), '4');

//     // reverse(s.begin(), s.end());

//     auto it2 = s.find('2');

//     if(it==s.end()){
//         cout<<ans<<endl;
//         return;
//     }

//     auto it1 = s.find('1');
//     auto it3 = s.find('3');

//     auto it = it3;
//     if(it1-s.begin()<it3-s.begin()) it=it1;

//     int c2 = count(it, s.end(), '2');

//     ans=c2;

//     reverse(s.begin(), s.end());

//     it2 = s.find('2');

//     int c = count(it2, s.end(), '1') + count(it2, s.end(), '3');

//     ans=min(ans, c);

//     cout<<c4+ans<<endl;
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

// void solve() {
//     string s;
//     cin >> s;

//     int c4 = count(s.begin(), s.end(), '4');

//     auto it2 = s.find('2');

//     if (it2 == string::npos) {
//         cout << c4 << endl;
//         return;
//     }

//     auto it1 = s.find('1');
//     auto it3 = s.find('3');

//     if(it1==string::npos && it3==string::npos){
//         cout<<c4<<endl;
//         return;
//     }

//     auto it = min(it1, it3);

//     int ans;
//     int c2 = count(s.begin() + it, s.end(), '2');
//     ans = c2;

//     reverse(s.begin(), s.end());

//     it2 = s.find('2');

//     int c = count(s.begin() + it2, s.end(), '1') + count(s.begin() + it2, s.end(), '3');

//     ans = min(ans, c);

//     cout << c4 + ans << endl;
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

// void solve() {
//     string s;
//     cin >> s;

//     int c4 = count(s.begin(), s.end(), '4');

//     auto last2 = s.rfind('2');

//     if (last2 == string::npos) {
//         cout << c4 << endl;
//         return;
//     }

//     int c2 = count(s.begin(), s.end(), '2');
//     int c13 = count(s.begin(), s.begin() + last2, '1')
//             + count(s.begin(), s.begin() + last2, '3');

//     int ans = min(c2, c13);

//     cout << c4 + ans << endl;
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

    int n = s.size(), c4 = 0;

    vector<int> p(n + 1), suf(n + 1);

    for(int i = 0; i < n; i++) {
        c4 += (s[i] == '4');
        p[i + 1] = p[i] + (s[i] == '1') + (s[i] == '3');
    }

    for(int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + (s[i] == '2');
    }

    int ans = 1e18;

    for(int i = 0; i <= n; i++) {
        ans = min(ans, p[i] + suf[i]);
    }

    cout << ans + c4 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) solve();
}

