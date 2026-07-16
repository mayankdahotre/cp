// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int p;
//     cin>>p;
//     p--; // ✅ fix 1-based indexing (important)

//     int ans=0;
//     int iv=v[p];

//     int l=0,r=n-1;

//     while(l<=r){
//         bool foundL = false, foundR = false;

//         for(int i=l; i<=p; i++){
//             if((v[i]^iv)==1){   
//                 l=i;
//                 foundL = true;
//                 break;
//             }
//         }
        
//         for(int i=r; i>=p; i--){
//             if((v[i]^iv)==1){  
//                 r=i;
//                 foundR = true;
//                 break;
//             }
//         }

//         if(!foundL && !foundR) break;

//         for(int i=l; i<=r; i++){
//             v[i]=v[i]^1;
//         }
//         ans++;

//         // for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         // cout<<endl;
//     }

//     cout<<ans<<endl;
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
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int p;
    cin>>p;
    p--; // 1-based to 0-based

    int ans=0;

    int cl=0;
    int cr=0;

    int l = p; 
    int r = p;

    for(int i=0; i<=p; i++){
        if(v[i]!=v[p]){
            l=i;
            break;
        }
    }

    for(int i=n-1; i>=p; i--){
        if(v[i]!=v[p]){
            r=i;
            break;
        }
    }

    for(int i=l; i<p; i++){
        if(v[i]!=v[i+1]) cl++;
    }

    for(int i=r; i>p; i--){
        if(v[i]!=v[i-1]) cr++;
    }

    ans=max(cl,cr);

    if(ans%2) ans++;

    cout<<ans<<endl;
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