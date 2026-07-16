// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,r,b;

//     int d=r/(b+1);
//     int e=r/d;
//     if(r%(b+1)) e++;
//     int ne=r%(b+1);

//     string res = string() + string('RB',b) + string('R',1);
//     int i=1;
//     bool done = false;
//     while(true){
//         string add = string('R',e-1);
//         if(ne) res.insert(i, add);
//         i+=e+1;
//         ne--;
//         if(!ne && done){
//             e--;
//             done=true;
//         }

//         if(res.size()==n) break;
//     }

//     cout<<res<<endl;
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
//     int n,r,b;
//     cin>>n>>r>>b;

//     int d = r/(b+1);
//     int rem = r%(b+1);

//     string res = "";

//     for(int i=0;i<b+1;i++){
//         int cnt = d + (i < rem ? 1 : 0);
//         res += string(cnt, 'R');
//         if(i < b) res += 'B';
//     }

//     cout<<res<<endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,r,b;
    cin>>n>>r>>b;

    string res="";

    int d=r/(b+1);
    int rem=r%(b+1);

    for(int i=0; i<=b; i++){
        int cnt = d;
        if(i<rem) cnt++;
        res+=string(cnt,'R');
        if(i<b) res+=string(1,'B');
    }

    cout<<res<<endl;
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