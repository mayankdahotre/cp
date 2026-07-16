// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// bool ispl(int x){
//     string s = to_string(x);
//     int n = s.length();

//     for(int i=0; i<n/2; i++){
//         if(s[i]!=s[n-i]) return false;
//     }

//     return true;
// }

// void solve() {
//     int n;
//     cin>>n;

//     string s = to_string(n);
//     int l = s.length();

//     int pl = (l+1)/2;

//     for(int i=0)

//     if(n%12==0){
//         cout<<0<<" "<<n<<endl;
//         return;
//     }

//     for(int i=0; i<n; i+=12){
//         if(ispl(n-i)){
//             cout<<n-i<<" "<<i<<endl;
//             return;
//         }
//     }

    

//     cout<<-1<<endl;
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
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     string s = to_string(n);
//     int l = s.length();

//     int m = (l+1)/2;
//     string h = s.substr(0,m);
//     int hi = stoll(h);

//     string l = '1' + string(m-2,'0');
//     int lo = stoll(l);

//     for(int i=lo; i<hi; i++){
//         string sx = to_string(i);
//         string t = sx;
//         reverse(sx.begin(), sx.end());
//         t += sx;
//         int a = stoll(t);

//         if((n-a)%12==0){
//             cout<<a<<" "<<n-a<<endl;
//             return;
//         }
//     }

//     cout<<-1<<endl;
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

// // Helper to safely verify a palindrome
// bool is_palindrome(int x) {
//     string s = to_string(x);
//     string r = s;
//     reverse(r.begin(), r.end());
//     return s == r;
// }

// void solve() {
//     int n;
//     cin >> n;

//     // Small cases can be easily brute-forced backward by testing b
//     if (n <= 100000) {
//         for (int b = 0; b <= n; b += 12) {
//             if (is_palindrome(n - b)) {
//                 cout << n - b << " " << b << "\n";
//                 return;
//             }
//         }
//         cout << -1 << "\n";
//         return;
//     }

//     string s_n = to_string(n);
//     int len = s_n.length();

//     // Check both the same length as n, and one digit shorter
//     for (int l : {len, len - 1}) {
//         if (l < 1) continue;

//         // Brute force just the first few digits to control bounds and modulo 
//         int pref_len = min(3LL, (l + 1) / 2);
//         int max_pref = 1;
//         for (int i = 0; i < pref_len; ++i) max_pref *= 10;
//         int min_pref = (pref_len == 1) ? 0 : max_pref / 10;

//         for (int p = min_pref; p < max_pref; ++p) {
//             string pref = to_string(p);
            
//             // Pad the middle with a safe constant like '1's
//             string middle(l - 2 * pref_len, '1');
            
//             string suff = pref;
//             reverse(suff.begin(), suff.end());
            
//             string candidate = pref + middle + suff;
            
//             // Handle odd lengths where prefix and suffix overlap in the absolute middle
//             if (l - 2 * pref_len < 0) {
//                 // If they overlap (e.g. length 1 or 3 with pref_len 2), handle structure
//                 candidate = pref;
//                 for (int i = l / 2 - 1; i >= 0; --i) candidate += pref[i];
//             }

//             int a = stoll(candidate);
            
//             if (a <= n && (n - a) % 12 == 0) {
//                 cout << a << " " << n - a << "\n";
//                 return;
//             }
//         }
//     }

//     cout << -1 << "\n";
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
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

// bool ispl(int x) {
//     string s = to_string(x);
//     string r = s;
//     reverse(r.begin(), r.end());
//     return s == r;
// }

// void solve() {
//     int n;
//     cin>>n;
//     for (int b=0; b<=min(n,(int)12*150); b+=12) {
//         int a = n-b;
//         if (a>=0 && ispl(a)) {
//             cout<<a<<" "<<b<<endl;
//             return;
//         }
//     }
    
//     cout<<-1<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int T;
//     cin >> T;
//     while (T--) solve();
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

    if(n==10){
        cout<<-1<<endl;
        return;
    }
    
    if(n%12!=10){
        cout<<n%12<<" "<<n-n%12<<endl;
        return;
    }
    else{
        cout<<22<<" "<<n-22<<endl;
        return;
    }
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