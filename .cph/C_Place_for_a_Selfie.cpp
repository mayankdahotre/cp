// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     vector<tuple<int, int, int>> p(m);
//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         p[i] = {a, b, c};
//     }

//     for (int j = 0; j < m; j++) {
//         int a, b, c;
//         tie(a, b, c) = p[j];
//         bool found = false;

//         for (int i = 0; i < n; i++) {
//             int k = v[i];
//             if ((b - k) * (b - k) - 4 * a * c < 0) {
//                 cout << "YES" << endl << k << endl;
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) cout << "NO" <<endl;
//     }

//     cout << endl;
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


#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;

        double D=4.0*a*c; 

        if(D<=0){
            cout<<"NO"<<endl;
            continue;
        }

        double l=b-sqrt(D),r=b+sqrt(D);

        auto it=upper_bound(v.begin(),v.end(),l);

        if(it!=v.end()&&*it<r){
            cout<<"YES"<<endl<<*it<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    cout<<endl;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)solve();
    return 0;
}
