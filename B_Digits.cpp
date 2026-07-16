// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,d;
//     cin>>n>>d;

//     vector<int> v;
//     v.push_back(1);

//     if(n>2 || d%3==0) v.push_back(3);

//     if(d==5) v.push_back(5);

//     if(n>2 || d==7) v.push_back(7);

//     if(n>6 || d==9) v.push_back(9);

//     for(auto i: v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
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
    int n, d;
    cin>>n>>d;

    vector<int> v;

    v.push_back(1);

    if((d%3==0) || n>2) v.push_back(3);

    if(d%5==0) v.push_back(5);

    if(n>2 || d%7==0) v.push_back(7);

    if((n>6) || (d%9==0)) v.push_back(9);

    for(auto i: v) cout<<i<<" ";
    cout<<endl;

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

// void solve() {
//     int n, d;
//     cin>>n>>d;

//     n = min(n, 7LL);

//     int fact=1;
//     for(int i=1; i<=n; i++) fact*=i;

//     for(int div: {1,3,5,7,9}){
//         int rem=0;
//         for(int i=0; i<fact; i++){
//             rem=(rem*10+d)%div;
//         }
//         if(rem==0) cout<<div<<" ";
//     }

//     cout<<endl;
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