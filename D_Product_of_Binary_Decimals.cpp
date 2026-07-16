// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool bindec(int n){
//     string s = to_string(n);

//     for(int i=0; i<s.length(); i++){
//         if(s[i]!='0' || s[i]!='1') return false;
//     }
    
//     return true;
// }

// bool ispbd(int n){
//     string s = to_string(n);

//     bool b = false;
//     for(int i=2; i*i<=n; i++){
//         if(bindec(i)) b=b|ispbd(n/i);
//     }

//     return b;
// }

// void solve() {
//     int n;
//     cin>>n;

//     if(bindec(n)){
//         cout<<"YES"<<endl;
//         return;
//     }

//     bool b = ispbd(n);

//     if(b) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

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

// bool bindec(int n){
//     string s = to_string(n);
//     for(int i=0; i<(int)s.length(); i++){
//         if(s[i]!='0' && s[i]!='1') return false;
//     }
//     return true;
// }

// bool ispbd(int n){
//     if(bindec(n)) return true; 

//     for(int i=2; i<=n; i++){
//         if(n%i==0 && bindec(i)){
//             if(ispbd(n/i)) return true;
//         }
//     }

//     return false;
// }

// void solve() {
//     int n;
//     cin>>n;

//     if(ispbd(n)) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

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

bool bindec(int n){
    string s = to_string(n);
    for(int i=0; i<(int)s.length(); i++){
        if(s[i]!='0' && s[i]!='1') return false;
    }
    return true;
}

int N = 1e5+2;
vector<int> bd;
int memo[100002];

void sieve(){
    for(int i=0; i<N; i++){
        if(bindec(i)) bd.push_back(i);
    }
}

bool ispbd(int n){
    if(memo[n]!=-1) return memo[n];
    if(bindec(n)) return memo[n]=true;

    for(int x: bd){
        if(x>=2 && n%x==0){
            if(ispbd(n/x)) return memo[n]=true;
        }
    }

    return memo[n]=false;
}

void solve() {
    int n;
    cin>>n;

    if(ispbd(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(memo, -1, sizeof(memo));
    sieve();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}