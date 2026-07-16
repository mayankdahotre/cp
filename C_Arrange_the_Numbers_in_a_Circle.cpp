// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

    // if(n<3){
    //     cout<<0<<endl;
    //     return;
    // }

//     int n1=0, n23=0, no=0, ne=0;
//     for(int i=0; i<n; i++){
//         if(v[i]==1) n1++;
//         else if(v[i]==2 || v[i]==3) n23++;
//         else if(v[i]%2) no++;
//         else ne++;
//     }

//     if(no+ne==1 && n23==0){
//         int m=0;
//         for(int i=0; i<n; i++) if(v[i]>3) m+=v[i];
//         cout<<m+min(2LL,n1)<<endl;
//         return;
//     }
//     else{
//         int p=0, m=0;
//         for(int i=0; i<n; i++){
//             if(v[i]>1){
//                 m+=v[i];
//                 p+=v[i]/2-1;
//             }
//         }
            
//         cout<<m+min(n1,p)<<endl;
//         return;
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

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];

    if(sum<3){
        cout<<0<<endl;
        return;
    }

    int n1 = 0, np = 0;
    int m = 0, p = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) n1++;
        else{
            m += v[i];
            p += v[i] / 2 - 1;
            np++;
        }
    }

    if(np == 0){
        cout << 0 << endl;
        return;
    }

    if(np == 1) p = m / 2;

    cout << m + min(n1, p) << endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}