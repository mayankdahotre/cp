// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     map<int,int> m;
//     int maxn = 0;
//     for(int i=0; i<n; i++){ m[v[i]]++; maxn=max(maxn,m[v[i]]); }

//     cout<<maxn<<endl;
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> vals;
        vector<int> cnts;
        vals.reserve(n);
        cnts.reserve(n);

        for (int i = 0; i < n; ) {
            long long v = a[i];
            int j = i + 1;
            while (j < n && a[j] == v) {
                j++;
            }
            vals.push_back(v);
            cnts.push_back(j - i);
            i = j;
        }

        long long answer = 0;
        int K = (int)vals.size();
        for (int i = 0; i < K; i++) {
            int c = cnts[i];
            int pc = 0;
            if (i > 0 && vals[i] == vals[i-1] + 1) {
                pc = cnts[i-1];
            }
            if (c > pc) {
                answer += (c - pc);
            }
        }

        cout << answer << endl;
    }

    return 0;
}
