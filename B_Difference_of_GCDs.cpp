// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,l,r;
//     cin>>n>>l>>r;

//     if(n==1){
//         cout<<"YES"<<endl;
//         cout<<l<<endl;
//         return;
//     }
//     else{
//         if(r-l<n){
//             cout<<"NO"<<endl;
//             return;
//         }
//         else{
//             vector<int> v(n);
//             for(int i=n-1; i>=0; i--){
//                 int d = r%(i+1);
//                 v[i]=r-d;
//             }

//             cout<<"YES"<<endl;
//             for(int i=0; i<n; i++) cout<<v[i]<<" ";
//             cout<<endl;

//             return;
//         }
//     }

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

void solve() {
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        int a = l+((i+1)-(l%(i+1)));
        int b = r-(r%(i+1));

        if(a>r && b<l){
            cout<<"NO"<<endl;
            return;
        }
        
        if(a<=r) v[i]=a;
        else v[i]=b;
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
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
//     int n,l,r;
//     cin>>n>>l>>r;

//     vector<int> ans;

//     for(int i=1; i<=n; i++){
//         int x = ((l+i-1)/i)*i;

//         if(x>r){
//             cout<<"NO"<<endl;
//             return;
//         }

//         ans.push_back(x);
//     }

//     cout<<"YES"<<endl;

//     for(auto x: ans) cout<<x<<" ";
//     cout<<endl;

//     return;
// }

// int32_t main() {

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while(T--){
//         solve();
//     }

//     return 0;
// }