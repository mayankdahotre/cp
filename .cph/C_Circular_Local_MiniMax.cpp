// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(n&1){
//         cout<<"NO"<<endl;
//         return;
//     }
//     else{
//         sort(v.begin(), v.end());
//         int cnt=1, a=v[0];
//         for(int i=0; i<n; i++){
//             if(v[i]!=a) cnt--;
//             else cnt++;
//             if(cnt<0){
//                 a=v[i];
//                 cnt=1;
//             }
//         }
//         int f=0;
//         for(int i=0; i<n; i++) if(v[i]==a) f++;
//         if(f<=n/2){
//             for(int i=1; i<n/2; i+=2) swap(v[i],v[n-1-i]);
//             cout<<"YES"<<endl;
//             for(int i=0; i<n; i++) cout<<v[i]<<" ";
//             cout<<endl;
//             return;
//         }
//         else{
//             cout<<"NO"<<endl;
//             return;
//         }
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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (n % 2) {
        cout << "NO" << endl;
        return;
    }

    sort(a.begin(), a.end());
    vector<int> b(n);
    int mid = n / 2;

    for (int i = 0; i < mid; ++i) {
        b[i * 2] = a[i];          // even indices: 0, 2, 4... <- smaller elements
        b[i * 2 + 1] = a[i + mid]; // odd indices: 1, 3, 5... <- larger elements
    }

    bool ok = true;
    for (int i = 0; i < n; ++i) {
        int prev = b[(i - 1 + n) % n];
        int next = b[(i + 1) % n];
        if (!((b[i] > prev && b[i] > next) || (b[i] < prev && b[i] < next))) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << endl;
        for (int x : b) cout << x << " ";
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
