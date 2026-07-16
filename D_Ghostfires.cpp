// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool isv(string s){
//     int n = s.length();
//     if(n>1) for(int i=0; i<n-1; i++) if(s[i]==s[i+1]) return false;
//     if(n>3) for(int i=0; i<n-3; i++) if(s[i]==s[i+3]) return false;
//     return true;
// }

// string ca(string s, int &r, int &g, int &b){
//     if(r && isv(s+"r")){
//         r--;
//         string s1 =  ca(s+"r", r, g, b);
//         r++;
//     }
//     else if(g && isv(s+"g")){
//         g--;
//         string s2 = ca(s+"g", r, g, b);
//         g++;
//     }
//     else if(b && isv(s+"b")){
//         b--;
//         string s3 = ca(s+"b", r, g, b);
//         b++;
//     }
//     if()
// }

// void solve() {
//     int r,g,b;
//     cin>>r>>g>>b;

//     string s = ca("",r,g,b);

//     cout<<s<<endl;

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

bool valid(string &s, char ch){
    int n = s.size();
    if(n >= 1 && s[n-1] == ch) return false;
    if(n >= 3 && s[n-3] == ch) return false;
    return true;
}

string ca(string s, int r, int g, int b){
    vector<pair<int,char>> v = {
        {r, 'R'}, {g, 'G'}, {b, 'B'}
    };

    sort(v.rbegin(), v.rend());

    for(auto p : v){
        int cnt = p.first;
        char ch = p.second;

        if(cnt == 0) continue;
        if(!valid(s, ch)) continue;

        if(ch == 'R') return ca(s + 'R', r-1, g, b);
        if(ch == 'G') return ca(s + 'G', r, g-1, b);
        if(ch == 'B') return ca(s + 'B', r, g, b-1);
    }

    return s;
}

void solve() {
    int r, g, b;
    cin >> r >> g >> b;

    string ans = ca("", r, g, b);
    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}