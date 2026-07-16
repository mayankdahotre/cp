// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     int num=0;
//     int d = n;
//     while(k!=0){
//         if(d==n){
//             k-=n;
//             num++;
//         }
//         k--;
//         else{
//             if(k>=d){
//                 num++;
//                 k-=d;
//             }
//             if(k>=d){
//                 num++;
//                 k-=d;
//             }
//             else{
//                 num++;
//                 k-=k;
//             }
//         }
//     }

//     cout<<num<<endl;
//     return;

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
    int n, k;
    cin >> n >> k;

    int num = 0;
    int d = n;
    while (k != 0) {  
        if (d == n) {
            k -= n;
            num++;
            d--;
        } else {
            if (k >= d) {
                num++;
                k -= d;
            } 
            else if(k>0){
                num++;
                k = 0;  
            }
            else{
                break;
            }

            if (k >= d) {
                num++;
                k -= d;
            } 
            else if(k>0){
                num++;
                k = 0;  
            }
            else{
                break;
            }
            d--;
        }
    }

    cout << num << endl;
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
