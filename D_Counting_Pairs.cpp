// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     int l=sum-y, r=sum-x;

//     sort(v.begin(), v.end());

//     int ans=0;
//     for(int i=0; i<n-1; i++){
//         auto it1 = lower_bound(v.begin(), v.end(), l);
//         auto it2 = upper_bound(v.begin(), v.end(), r);

//         ans+=it2-it1;
//     }

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
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(n);

    int sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    int l=sum-y, r=sum-x;

    sort(v.begin(),v.end());

    int ans=0;

    for(int i=0;i<n-1;i++){

        auto it1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
        auto it2=upper_bound(v.begin()+i+1,v.end(),r-v[i]);

        ans+=it2-it1;
    }

    cout<<ans<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--) solve();
}