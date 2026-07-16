// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s;
//     cin>>s;

//     for(int i=1; i<s.length()-1; i++){
//         if(s[i-1]==s[i] && s[i]==s[i+1]){
//             s[i]=((s[i-1]-'a')+(s[i+1]-'a')+1)%26+'a';
//         }
//     }

//     for(int i=0; i<s.length()-1; i++){
//         if(s[i]==s[i+1]){
//             if(i>0 && i<s.length()-1) s[i]=((s[i-1]-'a')+(s[i+1]-'a')+1)%26+'a';
//             else s[i]=(s[i]-'a'+1)%26+'a';
//         }
//     }

//     cout<<s<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;

    // fix triples
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i-1] == s[i] && s[i] == s[i+1]){
            for(char c = 'a'; c <= 'z'; c++){
                if(c != s[i-1] && c != s[i+1]){
                    s[i] = c;
                    break;
                }
            }
        }
    }

    // fix pairs
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] == s[i+1]){
            for(char c = 'a'; c <= 'z'; c++){
                if((i == 0 || c != s[i-1]) && c != s[i+1]){
                    s[i] = c;
                    break;
                }
            }
        }
    }

    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}