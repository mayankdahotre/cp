// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int onec(int x, string s){
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='A') x--;
//         else x/=2;
//     }
//     return x;
// }

// void solve() {
//     int n, q;
//     cin>>n>>q;

//     string s;
//     cin>>s;

//     vector<int> v(q);
//     for(int i=0; i<q; i++) cin>>v[i];

//     for(int i=0; i<q; i++){
//         int j=0;
//         while(v[i]){
//             v[i] = onec(v[i], s);
//             j+=n;
//             if(onec(v[i], s)<=0) break;
//         }

//         for(int k=0; k<n; k++){
//             if(s[k]=='A') v[i]--;
//             else v[i]/=2;

//             j++;
//             if(v[i]==0) break;
//         }

//         cout<<j<<endl;
//     }
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

// int onec(int x, string s){
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='A') x--;
//         else x/=2;
//     }
//     return x;
// }

// void solve() {
//     int n, q;
//     cin>>n>>q;

//     string s;
//     cin>>s;

//     vector<int> v(q);
//     for(int i=0; i<q; i++) cin>>v[i];

//     for(int i=0; i<q; i++){
//         int j=0;

//         while(v[i]){
//             int nxt = onec(v[i], s);

//             if(nxt <= 0) break;

//             v[i] = nxt;
//             j += n;
//         }

//         for(int k=0; k<n; k++){
//             if(s[k]=='A') v[i]--;
//             else v[i]/=2;

//             j++;
//             if(v[i]==0) break;
//         }

//         cout<<j<<endl;
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, q;
//     cin>>n>>q;

//     string s;
//     cin>>s;

//     while(q--){
//         int x;
//         cin>>x;

//         int j = 0;
//         int i = 0;

//         while(x > 0){
//             if(s[i]=='A') x--;
//             else x/=2;

//             j++;
//             i++;
//             if(i==n) i=0;

//             if(x==0) break;
//         }

//         cout<<j<<endl;
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }


#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int cntA = count(s.begin(), s.end(), 'A'); 

    while(q--) {
        int x, ans = 0, i = 0;
        cin >> x;

        while(x > 0) {
            if(s[i] == 'A') {
                if(cntA == n) {          
                    int rem = n - i;     
                    if(x <= rem) {       
                        ans += x;
                        x = 0;
                    } 
                    else{             
                        int skip = (x - rem) / n;
                        ans += rem + skip * n;
                        x   -= rem + skip * n;
                        i = 0;
                        continue;
                    }
                    break;
                }
                x--;
            } 
            else x /= 2;   
                        
            ans++;
            i = (i + 1) % n;
        }
        cout << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}