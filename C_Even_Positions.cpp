// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     for(int i=n-2; i>=0; i-=2){
//         if(i==0) s[i]='(';
//         else if(s[i+1]==')'){
//             else if(s[i-1]=='(') s[i]=')';
//             else s[i]='(';
//         }
//         else s[i]='(';
//     }

//     cout<<s<<endl;

//     stack<pair<char,int>> st;
//     int ans=0;

//     for(int i=0; i<n; i++){
//         if(s[i]=='('){
//             st.push({'(', i});
//         }
//         else{
//             ans+=i-st.top().second;
//             st.pop();
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
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = n - 2; i >= 0; i -= 2){
        if(i == 0) s[i] = '(';
        else if(s[i + 1] == ')'){
            if(s[i - 1] == '(') s[i] = ')';
            else s[i] = '(';
        }
        else{
            if(s[i-1]=='(') s[i] = ')';
            else s[i]='(';
        }
    }

    stack<pair<char,int>> st;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push({'(', i});
        else {
            ans += i - st.top().second;
            st.pop();
        }
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