// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     int num=n;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             string sub = s.substr(i,j+1);
//             int len = sub.length();
//             int cnt = 0;
//             for(int k=0; i<n-len; k++){
//                 if(s.substr(k,k+len)==sub){
//                     cnt++;
//                 }
//             }
//             if(cnt>2){
//                 num-=(cnt-1)*(len-1);
//             }
//         }
//     }
//     if(num<n){
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

    string s;
    cin >> s;

    int num = n;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string sub = s.substr(i, j - i + 1);
            int len = sub.length();
            int cnt = 0;
            for (int k = 0; k < n - len; k++) {  
                if (s.substr(k, len) == sub) {   
                    cnt++;
                }
            }
            if (cnt > 2) {
                num -= (cnt - 2) * (len - 1);  
            }
        }
    }

    if (num < n) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
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


