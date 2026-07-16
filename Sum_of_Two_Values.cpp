// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int32_t main() {
//     int n,x;
//     cin>>n>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     for(int i=0; i<n; i++){
//         auto it = find(v.begin(), v.end(), x-v[i]);
//         if(it!=v.end() && it-v.begin()!=i){
//             cout<<i+1<<" "<<it-v.begin()+1<<endl;
//             return 0;
//         }
//     }

//     cout<<"IMPOSSIBLE"<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    unordered_map<int, int> idx; // Stores value -> position (1-based index)

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int complement = x - a[i];

        // Check if the complement exists
        if (idx.count(complement)) {
            cout << idx[complement] + 1 << " " << i + 1 << endl; // Print 1-based index
            return 0;
        }

        // Store the current value's index
        idx[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
