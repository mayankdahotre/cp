// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int c1=0, c2=0, c0=0;
//     for(int i=0; i<n; i++){
//         if(v[i]%3==0) c0++;
//         if(v[i]%3==1) c1++;
//         else c2++;
//     }

//     int ans=c0+min(c1,c2);

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



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int a=0, b=0, c=0;
    for(int i=0; i<n; i++){
        if(v[i]==0) a++;
        else if(v[i]==1) b++;
        else c++;
    }

    int p=min(b,c);
    cout<<a+p+(b-p)/3+(c-p)/3<<endl;
    return;
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