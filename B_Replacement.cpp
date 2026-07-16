// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     string t;
//     cin>>t;

//     stack<char> l,r;
//     int j=n-2;

//     l.push(s[n-1]);

//     for(int i=0; i<n; i++){
//         if(!l.empty() && l.top()!=r.top()){
//             l.pop();
//             r.pop();
//             l.push(t[i]);
//         }

//         while(s[j]==s[j+1]){
//             char x=l.top();
//             l.pop();
//             r.push(x);

//             l.push(s[j]);
//             j--;
//         }

//         if(j==0){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }

//     if(r.size()==1){
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
    cin>>n;

    string s, r;
    cin>>s>>r;

    int c0=0, c1=0;
    for(char c: s){
        if(c=='0') c0++;
        else c1++;
    }

    for(int i=0; i<n-1; i++){
        if(c0==0 || c1==0){
            cout<<"NO"<<endl;
            return;
        }
        if(r[i]=='0') c1--;
        else c0--;
    }

    cout<<"YES"<<endl;
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