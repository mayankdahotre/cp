// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> l = v;
//     for(int i=0; i<n; i++){
//         l[i]+=l[i-1];
//     }

//     reverse(v.begin(), v.end());
//     vector<int> r = v;
//     for(int i=0; i<n; i++){
//         r[i]+=r[i-1];
//     }
//     reverse(r.begin(), r.end());

//     int i=0, j=n-1, ans=0;
//     while(i+j<n){
//         if(l[i]==r[j]){
//             ans=i+j;
//         }
//         else if(l[i]<r[j]) i++;
//         else j--;
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

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<long long> l = v;
    for(int i = 1; i < n; i++) {
        l[i] += l[i - 1];
    }

    reverse(v.begin(), v.end());
    vector<long long> r = v;
    for(int i = 1; i < n; i++) {
        r[i] += r[i - 1];
    }
    reverse(r.begin(), r.end());

    int i = 0, j = n - 1;
    int ans = 0;

    while (i < n && j >= 0 && i < j) {
        if (l[i] == r[j]) {
            ans = i + (n - j)+1;
            i++;
            j--;
        }
        else if (l[i] < r[j]) {
            i++;
        } else {
            j--;
        }
    }

    cout << ans << endl;
}

int main() {
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
