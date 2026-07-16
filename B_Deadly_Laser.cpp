// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m,sx,sy,d;
//     cin>>n>>m>>sx>>sy>>d;

//     if(abs(n-sx)+abs(m-sy)<=2*d){
//         cout<<-1<<endl;
//         return;
//     }
//     else if(abs(sx-1)+abs(sy-1)<=2*d){
//         cout<<-1<<endl;
//         return;
//     }
//     else if(abs(sx+d)==n && abs(sx-d)==0 || abs(sy-d)==0  && abs(sy+d)==m){
//         cout<<-1<<endl;
//         return;
//     }
//     else{
//         cout<<abs(n-1)+abs(m-1)<<endl;
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

void solve() {
    int n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;

    if((min(sx-1,m-sy)<=d && min(n-sx,sy-1)<=d)){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<n+m-2<<endl;
        return;
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