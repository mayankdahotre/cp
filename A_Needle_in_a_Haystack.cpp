// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     string s;
//     cin>>s;

//     string t;
//     cin>>t;

//     vector<int> fs(26,0), ft(26,0);
//     for(int i=0; i<s.length(); i++) fs[s[i]-'a']++;

//     for(int i=0; i<t.length(); i++) ft[t[i]-'a']++;

//     for(int i=0; i<26; i++){
//         if(fs[i]>ft[i]){
//             cout<<"Impossible"<<endl;
//             return;
//         }
//     }

//     string s2 = s;
//     for(int i=1; i<s.length(); i++) s2[i]=max(s2[i], s2[i-1]);
    
//     vector<pair<char,int>> p;
//     p.push_back({s2[0],0});
//     for(int i=1; i<s2.length(); i++){
//         if(s[i]!=s[i-1]) p.push_back({s[i], i});
//     }

//     string ans;
//     vector<string> vs;
//     int k=0;
//     for(int i=p.size()-1; i>=1; i--){
//         string add;
//         int a = p[i-1].first-'a';
//         int b = p[i].first-'a';

//         for(int j=a; j<=b; j++){
//             add+=string(ft[j], 'a'+j);
//         }

//         int a2 = p[i-1].second;
//         int b2 = p[i].second;

//         for(int j=b2; j>=a2; j--){
//             ans=s[j]+ans;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     string s;
//     cin >> s;

//     string t;
//     cin >> t;

//     vector<int> fs(26,0), ft(26,0);

//     for(char c:s) fs[c-'a']++;
//     for(char c:t) ft[c-'a']++;

//     for(int i=0; i<26; i++){
//         if(fs[i] > ft[i]){
//             cout << "Impossible" << endl;
//             return;
//         }
//     }

//     for(char c:s) ft[c-'a']--;

//     string ans;
//     int j=0;
//     int c=s[0];

//     for(int i=0; i<26; i++){
//         if(i+'a'<c){
//             // debug(i+'a');
//             ans+=string(ft[i], 'a'+i);
//             // debug(ans);
//         }
//         else if(i+'a'==c){
//             ans+=c;
//             j++;
//             // debug(c);
//             // debug(i+'a');
//             for(int k=j; k<s.length(); k++){
//                 if(s[k]<=c) ans+=s[k];
//                 else{
//                     c=s[k];
//                     j=k;
//                     break;
//                 }
//                 // debug(ans);
//             }
//         }
//     }

//     cout << ans << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--){
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> fs(26,0), ft(26,0);
    for(char c:s) fs[c-'a']++;
    for(char c:t) ft[c-'a']++;

    for(int i=0; i<26; i++){
        if(fs[i] > ft[i]){
            cout << "Impossible" << endl;
            return;
        }
    }

    for(char c:s) ft[c-'a']--;

    string ans;
    for(int i = 0; i < (int)s.size(); i++){
        int ci = s[i] - 'a';
        for(int k = 0; k < ci; k++){
            ans += string(ft[k], 'a'+k);
            ft[k] = 0;
        }
        ans += s[i];
    }

    for(int k = 0; k < 26; k++){
        ans += string(ft[k], 'a'+k);
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}