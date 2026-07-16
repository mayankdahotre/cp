// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,b;
//     cin>>a>>b;

//     if(a>b) swap(a,b);

//     if(b%a){
//         cout<<-1<<endl;
//         return;
//     }
//     else{
//         if(a==b){
//             cout<<0<<endl;
//             return;
//         }
//         else{
//             int c = b/a;
//             int n=0;
//             while(c%8==0){
//                 c/=8;
//                 n++;
//             } 
//             while(c%4==0){
//                 c/=4;
//                 n++;
//             }
//             while(c%2==0){
//                 c/=2;
//                 n++;
//             }

//             cout<<c<<endl;
//             return;
//         }
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

void solve() {
    int a, b;
    cin >> a >> b;

    if (a > b) swap(a, b);

    if (b % a != 0) {
        cout << -1 << endl;
        return;
    }

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    int c = b / a;
    int n = 0;

    while (c % 8 == 0) c /= 8, n++;
    while (c % 4 == 0) c /= 4, n++;
    while (c % 2 == 0) c /= 2, n++;

    if (c == 1)
        cout << n << endl;
    else
        cout << -1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
    
    return 0;
}
