// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     reverse(v.begin(), v.end());

//     int ans = 0;

//     while(true){
//         int x = n;

//         for(int i = 0; i < n; i++){
//             if(v[i] != v[0]){
//                 x = i;
//                 break;
//             }
//         }

//         if(x == n) break;

//         for(int i = x; i <= min(n - 1, 2 * x); i++){
//             v[i] = v[0];
//         }

//         ans++;
//     }

//     cout << ans << endl;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }








// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     reverse(v.begin(), v.end());

//     int ans = 0;
//     int x = 1;

//     while(x < n){
//         if(x < n && v[x] == v[0]){
//             x++;
//             continue;
//         }
//         ans++;
//         x *= 2;
//     }

//     cout << ans << endl;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }








#include <bits/stdc++.h>
using namespace std;

#define int long long

// find largest prefix [0 ... x-1] where all == v[0]
int get_x(vector<int> &v){
    int n = v.size();
    int x = 1;

    while(x < n && v[x] == v[0]) x++;
    return x;
}

// apply operation on [l, r] (0-based)
void apply(vector<int> &v, int l, int r){
    int k = (r - l + 1) / 2;
    for(int i = 0; i < k; i++){
        v[l + k + i] = v[l + i];
    }
}

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    reverse(v.begin(), v.end());

    int ans = 0;

    while(true){
        int x = get_x(v);

        if(x == n) break;

        if(2 * x > n){
            // last operation
            int l = x - (n - x);
            int r = n - 1;
            apply(v, l, r);
        }
        else{
            apply(v, 0, 2 * x - 1);
        }

        ans++;
    }

    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}