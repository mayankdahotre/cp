// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> l(m),b(m),h(m);
//     for(int i=0; i<m; i++){
//         cin>>l[i]>>b[i]>>h[i];
//     }

//     string s;
//     for(int i=0; i<m; i++){
//         int a=1,b=2,k=2;
//         while(true){
//             int c=a+b;
//             if(b<=min(l[i],b[i]) && c<=max(l[i],b[i]) && c<=h[i]){
//                 if(k==n){
//                     s+='1';
//                 }
//             }
//             else{
//                 if(b+c<h[i] && b+c<=max(l[i],b[i])){
//                     k++;
//                     if(k==n){
//                         s+='1';
//                     }
//                 }
//                 else{
//                     s+='0';
//                     break;
//                 }
//             }
//             k++;
//             a=b;
//             b=c;
//         }
//     }

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






// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> l(m), br(m), h(m); 
//     for (int i = 0; i < m; i++) {
//         cin >> l[i] >> br[i] >> h[i];
//     }

//     string s;

//     for (int i = 0; i < m; i++) {
//         int a = 1, b = 2, k = 2, c = b;


//         while (true) {
//             if (b<=min(l[i],br[i]) && a+b<=max(l[i],br[i]) && b<=h[i]) {
//                 if (k == n) {
//                     s += '1';
//                     break;
//                 }
//             } 
//             else {
//                 if (b + c <= h[i] && c <= min(l[i], br[i])) {
//                     if (k == n) {
//                         s += '1';
//                         break;
//                     }
//                 } 
//                 else {
//                     s += '0';
//                     break;
//                 }
//             }

//             k++;
//             a = b;
//             b = c;
//             c = a + b;

//             if (k > n) break;
//         }
//     }

//     cout << s << endl;
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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> w(m), d(m), h(m);
    for(int i=0; i<m; i++) cin>>w[i]>>d[i]>>h[i];
    vector<int> f(n+1);
    f[1]=1; 
    f[2]=2;
    for(int i=3; i<=n; i++) 
        f[i]=f[i-1]+f[i-2];
    int fn = f[n], fn1=f[n-1];
    string s;
    s.reserve(m);
    for(int i=0; i<m; i++){
        int a=w[i], b=d[i], c=h[i];
        if(min(a, b) < fn || fn > c){
            s += '0';
            continue;
        }
        bool b1 = (fn + fn1 <= c);
        bool b2 = (a-fn>=fn1 && b>=fn1) || (b-fn >=fn1 && a>=fn1);
        if(b1||b2) s+='1';
        else s+='0';
    }
    cout << s << endl;
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) 
        solve();
    return 0;
}
