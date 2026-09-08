// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();
//     int i=0, j=0, ans=0;

//     while(s[j]=='0') j++;

//     while(i<n){
//         while(s[i]=='1') i++;

//         if(i<j) j++;
//         else{
//             ans+=j-i+1;
//             s[i]='1';
//             s[j]='0';
//             j++;
//         }
//     }

//     cout<<ans<<endl;
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int i = 0, j = 0, ans = 0;

    while (j < n && s[j] == '0') j++;

    i = j;

    while (i < n) {
        while (i < n && s[i] == '1') i++;
        
        if (i >= n) break;

        ans += i - j + 1;
        s[i] = '1';
        s[j] = '0';
        j++;
        i++;
    }

    cout << ans << endl;
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