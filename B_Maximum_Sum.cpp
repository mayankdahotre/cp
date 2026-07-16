// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int MOD = 1e9+7;

// void solve() {
//     int n,k;
//     cin>>n>>k;
    
//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int cur=v[0];
//     int sum=v[0];
//     for(int i=0; i<n; i++){
//         cur=max(v[i], cur+v[i]);
//         sum=max(sum, cur);
//     }

//     int ans=0;
//     if(sum>0) ans+=sum*(1<<k - 1);

//     for(int i=0; i<n; i++) ans+=v[i];

//     cout<<ans%MOD<<endl;
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

int MOD = 1e9+7;

int power(int a, int b){
    int res=1;
    a%=MOD;
    while(b){
        if(b%2){ res=res*a%MOD; b--; }
        else{ a=a*a%MOD; b/=2; }
    }
    return res;
}

void solve() {
    int n,k;
    cin>>n>>k;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int cur=0;
    int sum=0;
    for(int i=0; i<n; i++){
        cur=max(0LL, cur+v[i]);
        sum=max(sum, cur);
    }

    int ans=0;
    if(sum>0) ans=sum%MOD*(power(2,k)-1+MOD)%MOD; 

    for(int i=0; i<n; i++) ans=(ans+v[i]%MOD+MOD)%MOD; 
    
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