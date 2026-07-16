// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,n;
//     cin>>a>>n;

//     vector<int> d(n);
//     for(int i=0; i<n; i++) cin>>d[i];

//     sort(d.begin(), d.end());

//     string s = to_string(a);
//     int m = s.length();

//     int lb = *lower_bound(d.begin(), d.end(), s[0]-'0');
//     int mx = d[n-1];

//     int n1 = stoi(string(m-1, mx));
//     int n2 = stoi(string(m, lb));
    
//     int ans = min(n1-a, n2-a);

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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,n;
//     cin>>a>>n;

//     vector<int> d(n);
//     for(int i=0; i<n; i++) cin>>d[i];

//     sort(d.begin(), d.end());

//     string s = to_string(a);
//     int m = s.length();

//     string t;
//     for(int i=0; i<n; i++){
//         int ub=-1;
//         auto ubi = upper_bound(d.begin(), d.end(), s[i]-'0');
//         if(ubi==d.end()) 

//         t+=lb+'0';
//     }

//     int ans=

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












// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,n;
//     cin>>a>>n;

//     int d1, d2;
//     cin>>d1>>d2;

//     d1=min(d1,d2);
//     d2=max(d1,d2);

//     string s=to_string(a);
//     int m = s.length();

//     int n1 = stoi(string(m-1, d2+'0'));
//     int ans=abs(n1-a);

//     int n2 = stoi(string(m+1, d1+'0'));
//     ans=min(ans,abs(n2-a));

//     string s3;
//     int c=0;
//     for(int i=0; i<m; i++){
//         c*=10;
//         if()
//         if(abs(d1-s[i]-'0')<abs(d1-s[i]-'0')){
            
//         }
//     }

//     int n3=stoi(s3);
//     ans=min(ans, abs(n3-a));

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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int a,n;
//     cin>>a>>n;

//     int d1,d2;
//     cin>>d1>>d2;

//     string s=to_string(a);
//     int m=s.length();

//     int ans=1e18;

//     auto check = [&](string t){
//         if(t.empty()) return;

//         int x=stoll(t);
//         ans=min(ans, abs(x-a));
//     };

//     if(m>1){
//         string t(string(m-1, char(d2+'0')));
//         check(t);
//     }
//     else
//     {
//         string t(string(m+1, char(d1+'0')));
//         check(t);
//     }

//     string t1="", t2="";
//     bool ok1=1, ok2=1;

//     for(int i=0; i<m; i++){
//         int x=s[i]-'0';

//         if(ok1){
//             if(d2<x){
//                 t1+=char(d2+'0');
//                 t1+=string(m-i-1, char(d2+'0'));
//                 ok1=0;
//             }
//             else if(d1<=x){
//                 t1+=char(d1+'0');

//                 if(d1<x){
//                     t1+=string(m-i-1, char(d2+'0'));
//                     ok1=0;
//                 }
//             }
//             else{
//                 ok1=0;
//             }
//         }

//         if(ok2){
//             if(d1>x){
//                 t2+=char(d1+'0');
//                 t2+=string(m-i-1, char(d1+'0'));
//                 ok2=0;
//             }
//             else if(d2>=x){
//                 t2+=char(d2+'0');

//                 if(d2>x){
//                     t2+=string(m-i-1, char(d1+'0'));
//                     ok2=0;
//                 }
//             }
//             else{
//                 ok2=0;
//             }
//         }
//     }

//     if(ok1) check(t1);
//     else if(!t1.empty()) check(t1);

//     if(ok2) check(t2);
//     else if(!t2.empty()) check(t2);

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

int a,n;
vector<int> d;

map<int,int> dp1,dp2;

int f(int x){
    if(x==0) return d[0];

    if(dp1.count(x)) return dp1[x];

    int ans=1e18;

    for(auto u:d){
        if(x<=u){
            return dp1[x]=u;
        }
    }

    for(auto u:d){
        int y=(x-u+9)/10;

        int z=f(y);

        ans=min(ans, 10*z+u);
    }

    return dp1[x]=ans;
}

int g(int x){
    if(x==0) return -1e18;

    if(dp2.count(x)) return dp2[x];

    int ans=-1e18;

    for(auto u:d){
        if(u>x) continue;

        ans=max(ans, u);

        int y=(x-u)/10;

        int z=g(y);

        if(z==-1e18) continue;

        ans=max(ans, 10*z+u);
    }

    return dp2[x]=ans;
}

void solve() {
    cin>>a>>n;

    d.resize(n);

    for(auto &u:d) cin>>u;

    if(n==1 && d[0]==0){
        cout<<a<<endl;
        return;
    }

    dp1.clear();
    dp2.clear();

    int ans=1e18;

    int x=f(a);
    ans=min(ans, x-a);

    int y=g(a);

    if(y!=-1e18){
        ans=min(ans, a-y);
    }

    cout<<ans<<endl;
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