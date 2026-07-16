// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i] >> b[i];
//     }

//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }

//     int ga = LLONG_MAX;

//     for (int i = 0; i < n; i++) {
//         int mina = LLONG_MAX, minb = LLONG_MAX;
//         int maxa = LLONG_MIN, maxb = LLONG_MIN;

//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 mina = min(mina, a[j]);
//                 minb = min(minb, b[j]);
//                 maxa = max(maxa, a[j]);
//                 maxb = max(maxb, b[j]);
//             }
//         }

//         int area = (maxa - mina+1) * (maxb - minb+1);
//         ga = min(ga, area);

//         if(ga<=n-1) ga=min((maxa - mina+2) * (maxb - minb+1),(maxa - mina+1) * (maxb - minb+2));
//     }

//     cout << ga << endl;
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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    multiset<int> sa(a.begin(), a.end());
    multiset<int> sb(b.begin(), b.end());

    int ans = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sa.erase(sa.find(a[i]));
        sb.erase(sb.find(b[i]));

        int mina = *sa.begin(), maxa = *sa.rbegin();
        int minb = *sb.begin(), maxb = *sb.rbegin();

        int area = (maxa - mina + 1) * (maxb - minb + 1);
        ans = min(ans, area);

        if(ans==n-1)
        ans = min( (maxa - mina + 2) * (maxb - minb + 1), (maxa - mina + 1) * (maxb - minb + 2));

        sa.insert(a[i]);
        sb.insert(b[i]);
    }

    cout << ans << endl;
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
