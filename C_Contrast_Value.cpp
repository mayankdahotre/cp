// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> cv;

//     cv.push_back(v[0]);
//     for(int i=1; i<n; i++){
//         if(v[i] != v[i-1]) cv.push_back(v[i]);
//     }

//     int nn = cv.size();
//     int del = 0;

//     for(int i=1; i<nn-1; i++){
//         if(!((cv[i-1] < cv[i] && cv[i] > cv[i+1]) ||
//              (cv[i-1] > cv[i] && cv[i] < cv[i+1])))
//             del++;
//     }

//     cout<<nn-del<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin>>T;
//     while(T--) solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    v.erase(unique(v.begin(), v.end()), v.end());
    
    n = v.size();
    int del = 0;

    for(int i=0; i<n-2; i++){
        if(v[i]<v[i+1] && v[i+1]<v[i+2]) del++;
        if(v[i]>v[i+1] && v[i+1]>v[i+2]) del++;
    }

    cout<<n-del<<endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}