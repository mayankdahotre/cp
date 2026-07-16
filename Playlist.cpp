// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int32_t main() {
//     int n;
//     cin>>n;

//     vector<int> k(n);
//     for(int i=0; i<n; i++) cin>>k[i];

//     int i=0;
//     int maxn = 0;
//     while(i<n){
//         vector<int> vis(n+1,0);
//         int num = 1;
//         for(int l=i; l<n; l++){
//             if(!vis[k[l]]){
//                 vis[k[l]]=1;
//                 num++;
//             else{
//                 maxn = max(maxn,num);
//                 num=1;
//                 break;
//             }
//         }
//         for(auto j: vis){
//             j=0;
//         }
//     }

//     cout<<maxn<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    unordered_set<int> s;
    int max_length = 0, left = 0;

    for (int right = 0; right < n; right++) {
        while (s.count(k[right])) {
            s.erase(k[left]);
            left++;
        }
        s.insert(k[right]);
        max_length = max(max_length, right - left + 1);
    }

    cout << max_length << endl;
    return 0;
}
