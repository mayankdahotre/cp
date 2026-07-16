#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    int num=0;
    while(n!=0){
        if(n%2 && n>=x && x%2){
            num++;
            n-=x;
        }
        if(n%2 && n>=x && x%2){
            num++;
            n-=x-1;
        }
        if(n%2==0 && n>=x && x%2==0){
            num++;
            n-=x;
        }
        if(n%2==0 && n>=x && x%2==0){
            num++;
            n-=x-1;
        }
        if(n<=x){
            num++;
            n=0;
        }
    }

    cout<<num<<endl;
    return;
}

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

// void solve() {
//     long long n, x;
//     cin >> n >> x;

//     long long num = 0;
//     while (n != 0) {
//         if (n > 2 * x - 1) {
//             num += n / (2 * x - 1);
//             n %= (2 * x - 1);
//         }
//         if (n < 2 * x - 1 && n > x) {
//             if ((n % 2 == 1 && x % 2 == 1) || (n % 2 == 0 && x % 2 == 0)) {
//                 num++;
//                 n -= x;
//             }
//             else if ((n % 2 == 1 && x % 2 == 0) || (n % 2 == 0 && x % 2 == 1)) {
//                 num++;
//                 n -= (x - 1);
//             }
//         }
//         if (n < x) {
//             num++;
//             n = 0;
//         }
//     }

//     cout << num << endl;
// }

// int main() {
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

// void solve() {
//     long long n, x;
//     cin >> n >> x;

//     long long num = 0;
//     while (n > 0) {  // Ensuring termination
//         if (x > 0 && n >= 2 * x - 1) {  // Prevents division by zero
//             num += 2*n / (2 * x - 1);
//             n %= (2 * x - 1);
//         }
//         if (n >= x && (n+x)%2==0) {  // Ensure `n` can be reduced safely
//             num++;
//             n -= x;
//         } 
//         else if(n>=x && (n+x)%2==1){
//             num++;
//             n-=x;
//         } else {  // Final step to reduce `n` to zero
//             num++;
//             n = 0;
//         }
//     }

//     cout << num << endl;
// }

// int main() {
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
