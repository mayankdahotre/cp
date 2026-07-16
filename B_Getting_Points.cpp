// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,p,l,t;
//     cin>>n>>p>>l>>t;

//     int ne=n;

//     if(p<=(n/14)*(2*t+l)){
//         cout<<ne-(p/14)*(2*t+l)<<endl;
//         return;
//     }
//     else{
//         int bws = (p/14)*(2*t+l);
//         if(n%14>7){
//             if(p-bws<=l+t){
//                 cout<<ne-(p/14)-1<<endl;
//                 return;
//             }
//             else{
//                 cout<<ne-(p/14)-1-((p-bws-l-t)/l)<<endl;
//                 return;
//             }
//         }
//         else{
//             cout<<ne-(p/14)-((p-bws)/l)<<endl;
//             return;
//         }
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

// void solve() {
//     int n, P, l, t;
//     cin >> n >> P >> l >> t;

//     int tasks = (n + 6) / 7;
//     int full = tasks / 2;

//     int days = 0;

//     int gain = full * (l + 2*t);

//     if(gain >= P) {
//         int need = (P + (l + 2*t) - 1) / (l + 2*t);
//         cout << n - need << endl;
//         return;
//     }

//     P -= gain;
//     days += full;

//     if(tasks % 2 == 1) {
//         if(P <= l + t) {
//             days++;
//             cout << n - days << endl;
//             return;
//         }
//         P -= (l + t);
//         days++;
//     }

//     int need = (P + l - 1) / l;
//     days += need;

//     cout << n - days << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, p, l, t;
    cin>>n>>p>>l>>t;

    int w = (n+6)/7;
    int bw = w/2;

    int d = 0;

    if(p<=(l+2*t)*bw){
        int need = (p+(l+2*t)-1)/(l+2*t);
        cout<<n-need<<endl;
        return;
    }

    p-=bw*(l+2*t);
    d+=bw;

    if(w%2){
        if(p<=l+t){
            d++;
            cout<<n-d<<endl;
            return;
        }
        d++;
        p-=l+t;
    }

    int need = (p+l-1)/l;
    d+=need;

    cout<<n-d<<endl;
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