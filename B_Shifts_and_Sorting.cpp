#include <bits/stdc++.h>
using namespace std;

#define int long long

void op(string &s, int l, int r) {
    int n = s.length();
    string s1 = s.substr(0, l);
    string s2 = s.substr(l + 1, r - l - 1);  // Fixing the substring length
    string s3 = s.substr(r + 1, n - r - 1);

    s = s1 + s[r] + s2 + s3; // Moving s[r] to the front of the section
}

void solve() {
    string s;
    cin >> s;

    int sum = 0;
    size_t it1 = s.find('0');  // Find first '0'

    if(s.find('1') == string::npos){
        cout<<0<<endl;
        return;
    }
    
    while (it1 != string::npos) {
        size_t it2 = s.find('0', it1 + 1); // Find next '0'

        if (it2 == string::npos) break; // No second '0' found

        sum += (it2 - it1 + 1);  // Compute sum

        op(s, it1, it2); // Modify string
        it1 = s.find('0'); // Restart search after modification
    }

    cout << sum << endl;
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
