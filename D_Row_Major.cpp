// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int hf(int n){
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0) return n/i;
//     }
//     return n;
// }

// void solve() {
//     string s = "abcdefghijklmnopqrstuvwxyz";

//     for(int i=0; i<5; i++){
//         string res;
//         for(int j=0; j<26; j++){
//             res+=s.substr(j,s.length()); 
//             res+=s.substr(0,j);
//         }
//         s=res;
//     }
    
//     int n;
//     cin>>n;

//     int h = hf(n);
//     int num = n/h;
    
//     string res;
//     string t = s.substr(h);
//     while(num--){
//         res+=t.substr(num);
//         res+=t.substr(0,num);
//     }

//     cout<<res<<endl;
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

int hf(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return n/i;
    }
    return n;
}

void solve() {
    string s = "abcdefghijklmnopqrstuvwxyz";

    for(int i=0; i<5; i++){
        string res;
        for(int j=0; j<26; j++){
            // FIX 1: use fixed length 26, not s.length()
            res += s.substr(j % 26, 26 - j % 26);
            res += s.substr(0, j % 26);
        }
        s = res;
    }

    int n;
    cin >> n;

    int h = hf(n);
    int num = n / h;

    string t = s.substr(h % s.size()); // guard against h >= s.size()

    string res;
    for(int k = 0; k < num; k++){
        // FIX 2: consistent indexing, build result once
        int pos = k % t.size();
        res += t.substr(pos);
        res += t.substr(0, pos);
    }

    cout << res << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}