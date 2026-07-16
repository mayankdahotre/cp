// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k, x;
//     cin>>n>>k>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     int g=1;
//     for(int i=0; i<n-1; i++){
//         if(v[i+1]-v[i]>x) g++;
//     }
//     // cout<<g<<endl;

//     vector<int> need;
//     for(int i=0; i<n-1; i++){
//         if(k==0) break;
//         if(g==1) break;
//         if(v[i+1]-v[i]>2*x && v[i+1]!=v[i]){
//             int add = (v[i+1]-v[i])/x;
//             if(v[i+1]==v[i]+add*k) add--;
//             need.push_back(add);
//         }
//         // cout<<i<<" "<<g<<endl;
//     }

//     sort(need.begin(), need.end());

//     for(auto add: need){
//         if(g==1) break;
//         if(k==0) break;
//         if(k>add){
//             k-=add;
//             g--;
//         }
//     }

//     cout<<g<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k,x;
//     cin>>n>>k>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> d;

//     for(int i=0; i<n; i++){
//         if(v[i+1]-v[i]>x) d.push_back(v[i+1]-v[i]);
//     }

//     int ans=0;

//     if(d.size()==0) ans=1;

//     sort(d.begin(), d.end());

//     for(int i=0; i<d.size(); i++){
//         if(k>=(d[i])/x){
//             k-=d[i]/x;
//             if(d[i]%x==0) k++;
//         }
//         else{
//             ans+=d.size()-i;
//             break;
//         }
//     }

//     if(!ans) ans=1;

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> d;

    for(int i=0; i<n-1; i++){              
        if(v[i+1]-v[i]>x) d.push_back(v[i+1]-v[i]);
    }

    int ans=1;                             
    
    sort(d.begin(), d.end());

    for(int i=0; i<(int)d.size(); i++){
        int need=(d[i]-1)/x;             
        if(k>=need){
            k-=need;
        }
        else{
            ans+=(int)d.size()-i;         
            break;
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}