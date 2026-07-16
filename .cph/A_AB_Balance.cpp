// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin >> s;

//     int na = count(s.begin(), s.end(), 'a');
//     int nb = s.size() - na;

//     if (na == 0 || nb == 0) {
//         cout << s << endl;
//         return;
//     }

//     if (na == 1 && nb == 1) {
//         cout << "aa" << endl;
//         return;
//     }

//     string result;
//     if (na == 1) {
//         result.append(nb / 2, 'b');
//         result += 'a';
//         result.append(nb - nb / 2, 'b');
//     } else if (nb == 1) {
//         result.append(na / 2, 'a');
//         result += 'b';
//         result.append(na - na / 2, 'a');
//     } else {
//         result.append(na / 2, 'a');
//         result.append(nb, 'b');
//         result.append(na - na / 2, 'a');
//     }

//     cout << result << endl;
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

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << s.back() << s.substr(1) << endl;
    }
    return 0;
}
