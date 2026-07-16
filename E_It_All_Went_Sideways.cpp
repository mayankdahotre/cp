// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     reverse(v.begin(), v.end());

//     int val=v[0];
//     for(int i=0; i<n; i++){
//         if(v[i]<v[i+1]){
//             val=v[i];
//             break;
//         }
//     }

//     int idx=-1;
//     for(int i=0; i<n; i++){
//         if(v[i]==val){
//             idx=i;
//             break;
//         }
//     }

//     if(v[idx]>0) v[idx]--;

//     int sum=0;
//     for(int i=idx+1; i<n; i++){
//         sum+=max(0LL, v[i]-v[idx]);
//     }

//     cout<<sum<<endl;
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
















// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     reverse(v.begin(), v.end());

//     vector<int> premin(n,INT_MAX);
//     premin[0]=v[0];
//     for(int i=1; i<n; i++) premin[i]=min(premin[i-1], v[i]);

//     // int val=v[0];
//     // for(int i=0; i<n; i++){
//     //     if(v[i]<v[i+1]){
//     //         val=v[i];
//     //         break;
//     //     }
//     // }

//     for(int i=0; i<n; i++) cout<<premin[i]<<" ";
//     cout<<endl;

//     int ans=0;

//     int val=-1;
//     for(int i=0; i<n; i++){
//         if(premin[i]!=val){
//             val=premin[i];
//             bool ok = (v[i]>0);

//             vector<int> premin2 = premin;
//             if(ok){
//                 premin2[i]--;
//                 for(int j=i; j<n; j++){
//                     premin2[j]=min(premin2[j], premin2[j-1]);
//                 }
//             int sum=0;
//             for(int j=0; i<n; i++){
//                 sum+=max(0LL, v[j]-premin2[i]);
//             }

//             ans=max(sum, ans);
//         }
//     }

//     // int idx=-1;
//     // for(int i=0; i<n; i++){
//     //     if(v[i]==val){
//     //         idx=i;
//     //         break;
//     //     }
//     // }

//     // if(v[idx]>0) v[idx]--;

//     // int sum=0;
//     // for(int i=idx+1; i<n; i++){
//     //     sum+=max(0LL, v[i]-v[idx]);
//     // }



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






// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     reverse(v.begin(), v.end());

//     vector<int> premin(n);
//     premin[0] = v[0];
//     for(int i = 1; i < n; i++) 
//         premin[i] = min(premin[i-1], v[i]);

//     int ans = 0;
//     int val = -1;

//     for(int i = 0; i < n; i++){
//         if(premin[i] != val){
//             val = premin[i];

//             if(v[i] > 0){
//                 vector<int> premin2 = premin;

//                 premin2[i]--;

//                 for(int j = i + 1; j < n; j++){
//                     premin2[j] = min(premin2[j], premin2[j-1]);
//                 }

//                 int sum = 0;
//                 for(int j = 0; j < n; j++){
//                     sum += max(0LL, v[j] - premin2[j]);
//                 }

//                 ans = max(ans, sum);
//             }
//         }
//     }

//     cout << ans-1 << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();

//     return 0;
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

//     vector<int> premin(n);
//     premin[0] = v[0];
//     for(int i = 1; i < n; i++) 
//         premin[i] = min(premin[i-1], v[i]);

//     int base = 0;
//     for(int j = 0; j < n; j++){
//         base += max(0LL, v[j] - premin[j]);
//     }


//     int ans = 0;
//     int val = -1;
//     for(int i = 0; i < n; i++){
//         if(premin[i] != val){
//             val = premin[i];

//             if(v[i] > 0){
//                 int ex = 0;

//                 int idx=i;
//                 for(int j=i+1; j<n; j++){
//                     if(premin[j]-1<premin[j]) idx=j;
//                     else break;
//                 }

//                 ans = max(ans, base + idx - i);
//             }
//         }
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();

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

    reverse(v.begin(), v.end());

    vector<int> premin(n);
    premin[0] = v[0];
    for(int i = 1; i < n; i++) 
        premin[i] = min(premin[i-1], v[i]);

    int base = 0;
    for(int j = 0; j < n; j++){
        base += max(0LL, v[j] - premin[j]);
    }

    int ans = base;
    int val = -1;

    for(int i = 0; i < n; i++){
        if(premin[i] != val){
            val = premin[i];

            if(v[i] > 0){
                int idx = i;

                for(int j = i; j < n; j++){
                    if(premin[j] == premin[i]) idx = j;
                    else break;
                }

                ans = max(ans, base + (idx - i + 1));
            }
        }
    }

    cout << ans -1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}