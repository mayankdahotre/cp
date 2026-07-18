// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, q;
//     cin>>n>>q;

//     string s;
//     cin>>s;

//     while(q--){
//         int l,r,k;
//         cin>>l>>r>>k;

//         string sub = s.substr(l,r-l+1);

//         int z=0;
//         for(int i=l; i<=r; i++) if(s[i]--'0') z++;

//         int o = r-l+1-z;

//         if(abs(z-o)>1){
//             cout<<"NO"<<endl;
//             return;
//         }

//         bool alt = true;
//         for(int i=l; i<r; i++){
//             if(s[i]==s[i+1]){
//                 alt=false;
//                 break;
//             }
//         }

//         if(alt){
//             cout<<"YES"<<endl;
//             return;
//         }

//         int m=0;

//         int len = r-l+1;
        
//         if(z>o){
//             for(int i=0; i<len; i++){
//                 if(i%2==0 && sub[i]=='1'){
//                     int x = find(sub.begin()+i, sub.end(), '0') - sub.begin();
//                     reverse(sub.begin()+i, sub.begin()+x);
//                     m++;
//                 }
//             }
//         }
//         else if(o>z){
//             for(int i=0; i<len; i++){
//                 if(i%2==0 && sub[i]=='0'){
//                     int x = find(sub.begin()+i, sub.end(), '1') - sub.begin();
//                     reverse(sub.begin()+i, sub.begin()+x);
//                     m++;
//                 }
//             }
//         }
//         else{
//             int m1=0, m2=0;
//             string sub2=sub;

//             for(int i=0; i<len; i++){
//                 if(i%2==0 && sub[i]=='1'){
//                     int x = find(sub.begin()+i, sub.end(), '0') - sub.begin();
//                     reverse(sub.begin()+i, sub.begin()+x);
//                     m1++;
//                 }
//             }

//             for(int i=0; i<len; i++){
//                 if(i%2==0 && sub2[i]=='0'){
//                     int x = find(sub2.begin()+i, sub2.end(), '1') - sub2.begin();
//                     reverse(sub2.begin()+i, sub2.begin()+x);
//                     m2++;
//                 }
//             }

//             m=min(m1,m2);
//         }

//         if(m<=k) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;

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
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, q;
    cin>>n>>q;

    string s;
    cin>>s;

    while(q--){
        int l,r,k;
        cin>>l>>r>>k;

        string sub = s.substr(l,r-l+1);

        int z=0;
        for(int i=l; i<=r; i++) if(s[i]=='0') z++; // Fixed syntax error

        int o = r-l+1-z;

        if(abs(z-o)>1){
            cout<<"NO"<<endl;
            continue; // Changed return to continue
        }

        bool alt = true;
        for(int i=l; i<r; i++){
            if(s[i]==s[i+1]){
                alt=false;
                break;
            }
        }

        if(alt){
            cout<<"YES"<<endl;
            continue; // Changed return to continue
        }

        int m=0;
        int len = r-l+1;
        
        if(z>o){
            for(int i=0; i<len; i++){
                if(i%2==0 && sub[i]=='1'){
                    auto it = find(sub.begin()+i, sub.end(), '0');
                    if(it != sub.end()) {
                        int x = it - sub.begin();
                        reverse(sub.begin()+i, sub.begin()+x+1);
                        m++;
                    }
                }
            }
        }
        else if(o>z){
            for(int i=0; i<len; i++){
                if(i%2==0 && sub[i]=='0'){
                    auto it = find(sub.begin()+i, sub.end(), '1');
                    if(it != sub.end()) {
                        int x = it - sub.begin();
                        reverse(sub.begin()+i, sub.begin()+x+1);
                        m++;
                    }
                }
            }
        }
        else{
            int m1=0, m2=0;
            string sub2=sub;

            for(int i=0; i<len; i++){
                if(i%2==0 && sub[i]=='1'){
                    auto it = find(sub.begin()+i, sub.end(), '0');
                    if(it != sub.end()) {
                        int x = it - sub.begin();
                        reverse(sub.begin()+i, sub.begin()+x+1);
                        m1++;
                    }
                }
            }

            for(int i=0; i<len; i++){
                if(i%2==0 && sub2[i]=='0'){
                    auto it = find(sub2.begin()+i, sub2.end(), '1');
                    if(it != sub2.end()) {
                        int x = it - sub2.begin();
                        reverse(sub2.begin()+i, sub2.begin()+x+1);
                        m2++;
                    }
                }
            }

            m=min(m1,m2);
        }

        if(m<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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