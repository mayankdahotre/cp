// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool isps(int n){
//     int ps=1;
//     for(int i; i*i<=n; i++) ps=i;
//     return ps*ps==n;
// }

// void solve() {
//     int p,q;
//     cin>>p>>q;


//     for(int m=1; m<=p/2; m++){
//         int D = (p+2)*(p+2)-4*(q-1);
//         if(!isps(D)) continue;

//         if((p-m+2)*m==q-1){
//             cout<<m<<" "<<p-m+2<<endl;
//             return;
//         }
//     }

//     while(p>0){
//         p-=2;
//         q+=1;

//         for(int m=1; m<=p/2; m++){
//             int D = (p+2)*(p+2)-4*(q-1);
//             if(!isps(D)) continue;

//             if((p-m+2)*m==q-1){
//                 cout<<m<<" "<<p-m+2<<endl;
//                 return;
//             }
//         }
//     }

//     cout<<-1<<endl;
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

void solve() {
    int p,q;
    cin>>p>>q;

    int X = 2*p + 4*q + 1;

    for(int i = 1; i*i <= X; i++){
        if(X % i == 0){
            int a = i;
            int b = X / i;

            if(a % 2 == 1 && b % 2 == 1){
                int n = (a - 1) / 2;
                int m = (b - 1) / 2;

                if(n > 0 && m > 0){
                    cout << n << " " << m << endl;
                    return;
                }
            }
        }
    }

    cout << -1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}