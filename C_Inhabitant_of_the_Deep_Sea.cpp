// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int i=0, j=n-1, ans=0;
//     while(k && i<j){
//         if(v[i]<v[j] && 2*v[i]<=k){
//             if(k%2==0) k++;
//             k-=2*v[i];
//             ans++;
//             v[j]-=k;
//             i++;
//         }
//         else if(v[i]>v[j] && 2*v[j]<=k){
//             if(k%2) k++;
//             k-=2*v[j];
//             ans++;
//             v[i]-=k;
//             j--;
//         }
//         else if(2*v[i]<=k){
//             ans+=2;
//             k-=2*v[i];
//             v[i]=0;
//             v[j]=0;
//             i++;
//             j--;
//         }
//         else break;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int i=0,j=n-1;

    while(i<j && k){
        int mn=min(v[i],v[j]);

        if(k<2*mn){
            v[i]-=(k/2 + k%2);
            v[j]-=(k/2);
            k=0;
        }
        else{
            v[i]-=mn;
            v[j]-=mn;
            k-=2*mn;
        }

        if(v[i]==0) i++;
        if(i<=j && v[j]==0) j--;
    }

    int ans=n-(j-i+1);

    if(i==j && v[i]<=k) ans++;

    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}