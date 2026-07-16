// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k,a,b;
//     cin>>n>>k>>a>>b;

//     vector<pair<int,int>> vp(n);
//     for(int i=0; i<n; i++){
//         int x,y;
//         cin>>x>>y;
//         vp.push_back({x,y});
//     }

//     int minp = LLONG_MAX;
//     if(a<=k){
//         int dist = 0;
//         for(int i=0; i<k; i++){
//             dist+=abs(vp[i].first-vp[b-1].first)+abs(vp[i].second-vp[b-1].second);
//             minp = min(dist,minp);
//         }
//     }
//     else{
//         int minp1 = LLONG_MAX, minp2 = LLONG_MAX;
//         int dist1 = 0, dist2 = 0;
//         for(int i=0; i<k; i++){
//             dist1+=abs(vp[i].first-vp[a-1].first)+abs(vp[i].second-vp[a-1].second);
//             minp1 = min(dist1,minp1);
//         }
//         for(int i=0; i<k; i++){
//             dist2+=abs(vp[i].first-vp[b-1].first)+abs(vp[i].second-vp[b-1].second);
//             minp2 = min(dist2,minp2);
//         }
//         int minp = minp1+minp2;
//     }

//     cout<<minp<<endl;
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
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vp[i] = {x, y};
    }

    int minp = LLONG_MAX;

    if(k==0){
        minp = abs(vp[a - 1].first - vp[b - 1].first) + abs(vp[a - 1].second - vp[b - 1].second);
    }
    else if (a <= k) {
        int minB = LLONG_MAX;
        for (int i = 0; i < k; i++) {
            int d = abs(vp[i].first - vp[b - 1].first) + abs(vp[i].second - vp[b - 1].second);
            minB = min(minB, d);
        }
        minp = minB;
    } else {
        int minA = LLONG_MAX, minB = LLONG_MAX;

        for (int i = 0; i < k; i++) {
            int d = abs(vp[i].first - vp[a - 1].first) + abs(vp[i].second - vp[a - 1].second);
            minA = min(minA, d);
        }

        for (int i = 0; i < k; i++) {
            int d = abs(vp[i].first - vp[b - 1].first) + abs(vp[i].second - vp[b - 1].second);
            minB = min(minB, d);
        }

        minp = minA + minB;

        minp = min(minp,abs(vp[a - 1].first - vp[b - 1].first) + abs(vp[a - 1].second - vp[b - 1].second));
    }

    cout << minp << endl;
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
