// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     while(n>0 && n%33 && n>33){
//         n-=33;
        
//         string s = to_string(n);
//         while(s.find(s.begin(), s.end(), "33")){
//             auto i = distance(find(s.begin(), s.end(), "33"), s.begin());
//             s = s.substr(0,i)+s.substr(i+2,n);
//         }
//     }
//     if(n%33==0){
//         cout<<"YES"<<endl;
//         return;
//     }
//     else{
//         cout<<"NO"<<endl;
//         return;
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


#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    while (n % 33 != 0 && n > 33) {
        n -= 33;
        
        string s = to_string(n);
        size_t pos;
        while ((pos = s.find("33")) != string::npos) {
            s = s.substr(0, pos) + s.substr(pos + 2);
        }
        n = stoll(s); 
    }
    
    if (n % 33 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
