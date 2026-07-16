// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool isp(string s){
//     int l=0, r=s.length()-1;
//     while(l<=r){
//         if(s[l]!=s[r]) return false;
//         l++;
//         r--;
//     }

//     return true;
// }

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     if(isp(s)){
//         if(n%2){
//             string res;
//             for(int i=0; i<n/2; i++) res+=string("01");
//             cout<<res<<endl;
//             return;
//         }
//         else{
//             string res;
//             for(int i=0; i<n+1; i++) res+= string("1");
//             cout<<res<<endl;
//             return;
//         }
//     }
//     else{
//         int d=0;
//         for(int i=0; i<n; i++) if(s[i]!=s[n-1-i]) d++;
//         d/=2;

//         string res;
//         for(int i=0; i<n+1; i++) res+=string("0");

//         if(n%2){
//             for(int i=d; i<n-d; i++) res[i]='1';
//             cout<<res<<endl;
//             return;
//         }
//         else{
//             int z=0;
//             for(int i=0; i<n; i++) if(s[i]=='0') z++;
//             int o = n-1-z;

//             res[o]='1';
//             res[z]='1';

//             cout<<res<<endl;
//             return;
//         }
//     }
    
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

// bool isp(string s){
//     int l = 0, r = s.length() - 1;

//     while(l <= r){
//         if(s[l] != s[r]) return false;
//         l++;
//         r--;
//     }

//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     if(isp(s)){
//         string res;

//         for(int i = 0; i <= n; i++) res += "1";

//         cout << res << endl;
//         return;
//     }

//     int d = 0;

//     for(int i = 0; i < n; i++){
//         if(s[i] != s[n-1-i]) d++;
//     }

//     d /= 2;

//     string res(n + 1, '0');

//     if(n % 2){
//         for(int i = d; i <= n-d; i++){
//             res[i] = '1';
//         }
//     }
//     else{
//         for(int i = d; i <= n-d; i += 2){
//             res[i] = '1';
//         }
//     }

//     cout << res << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--){
//         solve();
//     }
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isp(string s){
    int l = 0, r = s.length()-1;

    while(l <= r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string res(n+1, '0');

    int ans = 0;
    int eq = 0;
    int mid = 0;

    for(int i = 0; i < n/2; i++){
        if(s[i] == s[n-1-i]) eq++;
        else ans++;
    }

    if(n % 2) mid = 1;

    for(int j = 0; j <= eq; j++){
        for(int k = 0; k <= mid; k++){
            res[ans + 2*j + k] = '1';
        }
    }

    cout << res << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }
}