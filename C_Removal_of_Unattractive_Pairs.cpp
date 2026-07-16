// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     stack<char> st;
//     for(int i=0; i<n; i++){
//         if(st.empty()){
//             st.push(s[i]);
//         }
//         else{
//             if(st.top()!=s[i]){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//     }

//     int ans = st.size();

//     while(!st.empty()) st.pop(); // FIXED

//     reverse(s.begin(), s.end());

//     for(int i=0; i<n; i++){
//         if(st.empty()){
//             st.push(s[i]);
//         }
//         else{
//             if(st.top()!=s[i]){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//     }

//     ans = min(ans, (int)st.size());

//     cout << ans << endl; // FIXED
//     return;
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



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    char c = s[0];
    int cnt = 1;

    for(int i=1; i<n; i++){
        if(s[i]==c) cnt++;
        else cnt--;

        if(cnt<0){
            cnt=1;
            c=s[i];
        }
    }

    int mc = 0;
    for(int i=0; i<n; i++) if(s[i]==c) mc++;

    cout<<abs(n-2*mc)<<endl;
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