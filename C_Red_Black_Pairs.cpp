// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s1;
//     cin>>s1;

//     string s2;
//     cin>>s2;

//     int ans=0;

//     set<string> valid = {"RRBB", "BBRR", "RBRB", "BRBR", "RRRR", "BBBB"};

//     if(n%2==0){
//         for(int i=0; i<n; i+=2){
//             string t = string() + s1[i] + s1[i+1] + s2[i] + s2[i+1];
//             if(valid.find(t)==valid.end()){
//                 int r = count(t.begin(), t.end(), 'R');
//                 int b = count(t.begin(), t.end(), 'B');

//                 if(r==3 || b==3){
//                     ans+=1;
//                     continue;
//                 }
//                 ans+=2;
//                 continue;
//             }
//         }
//     }
//     else{
//         int ans1=0;
//         int ans2=0;

//         for(int i=0; i<n; i+=2){
//             string t = string() + s1[i] + s1[i+1] + s2[i] + s2[i+1];
//             if(valid.find(t)==valid.end()){
//                 int r = count(t.begin(), t.end(), 'R');
//                 int b = count(t.begin(), t.end(), 'B');

//                 if(r==3 || b==3){
//                     ans1+=1;
//                     continue;
//                 }
//                 ans1+=2;
//                 continue;
//             }
//         }
        
//         if(s1[n-1]!=s2[n-2]) ans1++;


//         for(int i=1; i<n; i+=2){
//             string t = string() + s1[i] + s1[i+1] + s2[i] + s2[i+1];
//             if(valid.find(t)==valid.end()){
//                 int r = count(t.begin(), t.end(), 'R');
//                 int b = count(t.begin(), t.end(), 'B');

//                 if(r==3 || b==3){
//                     ans2+=1;
//                     continue;
//                 }
//                 ans2+=2;
//                 continue;
//             }
//         }
        
//         if(s1[0]!=s2[0]) ans2++;

//         ans = min(ans1, ans2);
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

int get_col_cost(char c1, char c2) {
    if (c1 == c2) return 0;
    return 1;
}

int get_row_cost(char c1, char c2) {
    if (c1 == c2) return 0;
    return 1;
}

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int v_cost = get_col_cost(s1[i-1], s2[i-1]);
        dp[i] = min(dp[i], dp[i-1] + v_cost);

        if (i >= 2) {
            int h1 = get_row_cost(s1[i-2], s1[i-1]);
            int h2 = get_row_cost(s2[i-2], s2[i-1]);
            dp[i] = min(dp[i], dp[i-2] + h1 + h2);
        }
    }

    cout << dp[n] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}