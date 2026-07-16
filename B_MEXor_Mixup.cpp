// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int mex, xor;
//     cin>>mex>>xor;

//     int val=0;
//     mex--;

//     if(mex%4==0) val = mex;
//     else if(mex%4==1) val = 1;
//     else if(mex%4==2) val = mex+1;
//     else if(mex%4==3) val = 0;

//     mex++;

//     if(val!=xor) mex++;
    
//     cout<<mex<<endl;
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
    int mex, x;
    cin>>mex>>x;

    int val = 0;
    int n = mex - 1;

    if(n%4==0) val = n;
    else if(n%4==1) val = 1;
    else if(n%4==2) val = n+1;
    else val = 0;

    if(val == x) cout<<mex<<endl;
    else if((val ^ x) == mex) cout<<mex+2<<endl;
    else cout<<mex+1<<endl;

    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}