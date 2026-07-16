#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int sod(string s){
    int sum=0;
    for(int i=0; i<s.length(); i++) sum+=s[i]-'0';
    return sum;
}

void solve() {
    string s;
    int k;
    cin>>s;
    cin>>k;

    int n = s.length(); 
    int ans=0;

    while(sod(s)>k){ 
        int x=0;
        int j=0;
        for(int i=0; i<n; i++){
            x+=s[i]-'0';
            if(x>k) break;
            else j++;
        }

        string sb = s.substr(j); 
        int y = stoull(sb);

        ans += stoull(string("1") + string(n-j,'0')) - y;

        for(int i=j; i<n; i++) s[i]='0';

        int si = stoull(s);
        si += stoull(string("1") + string(n-j,'0'));

        s=to_string(si);
        n = s.length(); 
    }

    cout<<ans<<endl;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int sod(int n){
//     int sum=0;
//     while(n){
//         sum+=n%10;
//         n/=10;
//     }
//     return sum;
// }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     int ans=0;
//     int b=1;

//     while(sod(n)>k){
//         int r = n%b;
        
//         if(r>0){
//             int x = b-r;
//             n+=x;
//             ans+=x;
//         }

//         b*=10;
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