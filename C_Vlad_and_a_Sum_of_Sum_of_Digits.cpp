// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     int n = s.length();

//     int ans = 0;

//     for(int i=0; i<n-1; i++){
//         ans+=(s[i]-'0')*stoi(s.substr(i));
//     }
//     ans+=s[n-1]-'0';

//     int p=1;
//     for(int i=n-1; i>=0; i--){
//         ans+=45*(stoi(s.substr(n-i))-1)*p;
//         p*=10;
//     }

//     for(int i=0; i<n; i++){
//         if(i==0 && s[i]==1) continue;

//         ans+=(s[i]-'0'-1)*stoi(s.substr(i));
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin >> s;

//     int n = s.length();
//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         ans += (s[i] - '0') * stoll(s.substr(i));
//     }

//     for(int i = 1; i <= n; i++) {
//         string sub = s.substr(0, i);
//         if(sub.empty()) continue;
//         ans += 45 * (stoll(sub) - 1);
//     }

//     for(int i = 0; i < n; i++) {
//         if(i == 0 && s[i] == '1') continue;
//         ans += (s[i] - '0' - 1LL) * stoll(s.substr(i));
//     }

//     cout << ans << endl;
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

int sumDigitSums(int n) {
    if (n == 0) return 0;
    if (n < 10) return n * (n + 1) / 2;
    
    // Precompute powers and a[]
    vector<int> a(20, 0);  // safe size
    a[1] = 45;
    for (int i = 2; i < 20; i++) {
        a[i] = a[i - 1] * 10 + 45 * (long long)pow(10, i - 1);
    }
    
    function<int(int)> util = [&](int m) -> int {
        if (m < 10) return m * (m + 1) / 2;
        int d = log10(m);
        int p = pow(10, d);
        int msd = m / p;
        return msd * a[d] + (msd * (msd - 1) / 2) * p + msd * (1 + m % p) + util(m % p);
    };
    
    return util(n);
}

void solve() {
    int n;
    cin >> n;
    cout << sumDigitSums(n) << endl;
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