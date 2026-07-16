// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int a=0;

//     vector<int> pre(n+1,0), suf(n+1,0);
    
//     int sum=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==0){
//             sum=0;
//             a++;
//         }
//         else{
//             sum+=v[i];
//             if(sum==0) a++;
//         }
//         pre[i+1]=a;
//     }

//     int b=0;
//     sum=0;
//     for(int i=n-1; i>=0; i--){
//         if(v[i]==0){
//             sum=0;
//             b++;
//         }
//         else{
//             sum+=v[i];
//             if(sum==0) b++;
//         }
//         suf[i]=b;
//     }

//     int ans=0;
//     for(int i=0; i<n; i++){
//         ans=max(ans, pre[i]+suf[i]);
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
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define debugv(v) cout<<#v<<" = ";for(auto it:v)cout<<it<<" ";cout<<endl;
#define debugvv(v) {cout<<#v<<" = "<<endl;for(auto &r:v){for(auto &x:r)cout<<x<<" ";cout<<endl;}}

void solve(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    set<int>s;

    s.insert(0);

    int sum=0,ans=0;

    for(int i=0;i<n;i++){
        sum+=v[i];
        if(s.count(sum)){
            ans++;
            s.clear();
            s.insert(0);
            sum=0;
        }
        else s.insert(sum);
    }

    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;

    while(T--)solve();

    return 0;
}