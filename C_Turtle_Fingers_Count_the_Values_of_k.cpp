// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int pow(int a, int x){
//     int res=1;
//     while(x){
//         if(x%2){ res*=a; x--; }
//         else{ a=a*a; x/=2; }
//     }
//     return res;
// }

// void solve() {
//     int a,b,l;
//     cin>>a>>b>>l;

//     a=min(a,b);
//     b=max(a,b);

//     int y=0;
//     int mxb=1;
//     while(mxb<=l) { mxb*=b; y++; }

//     int x=0;
//     int mxa=1;

//     int ans=0;
//     while(mxb){
//         while(mxa*mxb<=l){ mxa*=a; x++; }
//         ans+=x;
//         mxb/=b;
//     }

//     cout<<ans<<endl;
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
    int a, b, l;
    cin>>a>>b>>l;

    set<int> ans;

    int pb=1; // b^y
    while(pb<=l){
        if(l%pb==0){
            int rem=l/pb;
            int pa=1; // a^x
            while(pa<=rem){
                if(rem%pa==0){
                    ans.insert(rem/pa); // k = l/(a^x * b^y)
                }
                pa*=a;
            }
        }
        pb*=b;
    }

    cout<<ans.size()<<endl;
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