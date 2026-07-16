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

//     int l=-1, r=-1;
//     for(int i=0; i<n; i++){
//         if(v[i]==0){
//             if(l==-1) l=i;
//             r=i;
//         }
//     }

//     if(l==-1){
//         cout<<1<<endl;
//         cout<<1<<" "<<n<<endl;
//         return;
//     }

//     if(l==r && l==0){
//         cout<<2<<endl;
//         cout<<2<<" "<<n<<endl;
//         cout<<1<<" "<<2<<endl;
//         return;
//     }
//     else if(l==r && r==n-1){
//         cout<<2<<endl;
//         cout<<1<<" "<<n-1<<endl;
//         cout<<1<<" "<<2<<endl;
//         return;
//     }
//     else if(l==r){
//         cout<<2<<endl;
//         cout<<1<<" "<<l+1<<endl;
//         cout<<1<<" "<<n-l<<endl;
//         return;
//     }

//     if(l==0 && r==n-1){
//         cout<<3<<endl;
//         cout<<1<<" "<<2<<endl;
//         cout<<2<<" "<<n<<endl;
//         cout<<1<<" "<<n-2<<endl;
//         return;
//     }
//     else if(l!=0 && r==n-1){
//         cout<<2<<endl;
//         cout<<l+1<<" "<<n<<endl;
//         cout<<1<<" "<<n-l-1<<endl;
//         return;
//     }
//     else if(l==0 && r!=n-1){
//         cout<<2<<endl;
//         cout<<1<<" "<<r+1<<endl;
//         cout<<1<<" "<<n-r<<endl;
//         return;
//     }
//     else if(l!=0 && r!=n-1){
//         cout<<2<<endl;
//         cout<<1<<" "<<r+1<<endl;
//         cout<<1<<" "<<n-r-1<<endl;
//         return;
//     }
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
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int l = -1, r = -1;
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) {
            if(l == -1) l = i;
            r = i;
        }
    }

    if(l == -1) {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    if(l == r && l == 0) {
        cout << 2 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    else if(l == r && r == n - 1) {
        cout << 2 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    else if(l == r) {
        cout << 2 << endl;
        cout << 1 << " " << l + 1 << endl;
        cout << 1 << " " << n - l << endl;
        return;
    }

    if(l == 0 && r == n - 1) {
        cout << 3 << endl;
        cout << 1 << " " << 2 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << n - 2 << endl;
        return;
    }
    else if(l != 0 && r == n - 1) {
        cout << 2 << endl;
        cout << l + 1 << " " << n << endl;
        cout << 1 << " " << n - l - 1 << endl;
        return;
    }
    else if(l == 0 && r != n - 1) {
        cout << 2 << endl;
        cout << 1 << " " << r + 1 << endl;
        cout << 1 << " " << n - r << endl;
        return;
    }
    else if(l != 0 && r != n - 1) {
        cout << 2 << endl;
        cout << 1 << " " << r + 1 << endl;
        cout << 2 << " " << n - r << endl;
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}