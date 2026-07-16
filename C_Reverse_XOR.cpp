// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define yes cout << "YES" << endl; return;
// #define no cout << "NO" << endl; return;

// void solve() {
//     int n;
//     cin>>n;

//     int o = __builtin_popcount(n);
//     debug(o);

//     if(o%2) no;

    // int c=0;
    // while((1<<c)&n==0) c++;
    // debug(c);

    // string s = string(c,'0') + to_string(n);
    // debug(s);

    // bool ispl=true;
    // for(int i=0; i<s.length()/2; i++){
    //     if(s[i]!=s[s.length()-1-i]){
    //         ispl=false;
    //         break;
    //     }
    // }

//     if(ispl){ yes; }
//     else no;
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
// #define yes cout << "YES" << endl; return;
// #define no cout << "NO" << endl; return;

// void solve() {
//     int n;
//     cin>>n;

    // int o = __builtin_popcountll(n);
    // // debug(o);

    // if(o%2){
    //     cout<<"NO"<<endl;
    //     return;
    // }

//     // string s = "";

//     // int x=n;
//     // debug(x);

//     int c=0;
//     while((1<<c)&n==0) c++;
//     // debug(c);

//     string s  = bitset<64>(n).to_string();

//     while(s.length()>1 && s[0]=='0'){
//         s.erase(s.begin());
//     }

//     c++;
//     s = string(c,'0')+s;
//     // debug(s);
//     // cout<<s<<endl;

//     bool ispl=true;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]!=s[s.length()-1-i]){
//             ispl=false;
//             break;
//         }
//     }
    
//     // cout<<s<<endl;

//     // debug(s);

//     // bool ispl=true;

//     if(ispl){
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

bool ispal(string &s){
    for(int i=0; i<s.length()/2; i++){
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }

    return true;
}

void solve() {
    int n;
    cin>>n;

    int o = __builtin_popcountll(n);

    if(o%2){
        cout<<"NO"<<endl;
        return;
    }

    if(n==0){
        cout<<"YES"<<endl;
        return;
    }

    while(n%2==0){
        n/=2;
    }

    string s = bitset<64>(n).to_string();

    while(s.length()>1 && s[0]=='0'){
        s.erase(s.begin());
    }

    if(ispal(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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