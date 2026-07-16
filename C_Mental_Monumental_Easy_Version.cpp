// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     // vector<int> yes(n,0);
//     // for(int i=0; i<n; i++) yes[v[i]]=1;

//     int last = 0;
//     int mex = 0;
//     for(int i=0; i<n; i++){
//         int a = find(v.begin(), v.end(), mex);
//         int b = lower_bound(v.begin(), v.end(), 2*mex+1)
        
//         if(a==v.end() && b==v.end()){
//             cout<<mex-1<<endl;
//             return;
//         }
        
//         last = min(a,b);

//         mex++;
//     }

//     cout<<mex<<endl;
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

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int mex = 0;
    int last = 0;

    for(int i = 0; i < n; i++){
        auto it1 = lower_bound(v.begin()+last, v.end(), mex);

        auto it2 = lower_bound(v.begin()+last, v.end(), 2*mex + 1);

        if((it1 == v.end() || *it1 != mex) && it2 == v.end()){
            cout << mex << endl;
            return;
        }
        else if(it2 == v.end()) last = it1-v.begin();
        else if((it1 == v.end() || *it1 != mex)) last = it2-v.begin();
        else last = it1-v.begin();

        mex++;
    }

    cout << mex << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool feasible(vector<int>& a, int k) {
//     multiset<int> ms(a.begin(), a.end());
//     for (int t = k-1; t >= 0; t--) {
//         auto it = ms.find(t);
//         if (it != ms.end()) {
//             ms.erase(it);
//         } else {
//             auto it2 = ms.upper_bound(2*t);
//             if (it2 != ms.end()) ms.erase(it2);
//             else return false;
//         }
//     }
//     return true;
// }

// void solve() {
//     int n; cin >> n;
//     vector<int> a(n);
//     for (auto& x : a) cin >> x;
//     sort(a.begin(), a.end());

//     int lo = 0, hi = n;
//     while (lo < hi) {
//         int mid = (lo + hi + 1) / 2;
//         if (feasible(a, mid)) lo = mid;
//         else hi = mid - 1;
//     }
//     cout << lo << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t; cin >> t;
//     while (t--) solve();
// }