// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int nf(int n){
//     vector<int> v(n+1);
//     for(int i=0; i<=n; i++) v[i]=i;

//     for(int i=2; i*i<=n; i++){
//         if(v[i]==i){
//             for(int j=i; j<=n; j+=i){
//                 v[j]=i;
//             }
//         }
//     }

//     map<int,int> m;
//     while(n){
//         m[n]++;
//         n/=v[n];
//     }

//     int ans=1;
//     for(auto [i,j]: m){
//         ans*=(j+1);
//     }

//     return ans;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     bool nd = true;
//     for(int i=0; i<n-1; i++) if(v[i]>v[i+1]) break;

//     if(b){
//         cout<<"Bob"<<endl;
//         return;
//     }

//     int num=0;
//     for(int i=0; i<n; i++){
//         if
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int f(int n){
    int cnt = 0;
    int x = -1;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            if(cnt){
                cnt++;
                break;
            }
            x=i;

            while(n%i==0) n/=i;
            cnt++;

            if(n>1) return -1;
        }
    }

    if(!cnt) return n;

    // if(cnt==2) return -1;

    return x;
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(is_sorted(v.begin(), v.end())){
        cout<<"Bob"<<endl;
        return;
    }

    vector<int> v2;
    for(int i=0; i<n; i++){
        if(f(v[i])==-1){
            cout<<"Alice"<<endl;
            return;
        }

        v2.push_back(f(v[i]));
    }

    // debugv(v2);

    if(is_sorted(v2.begin(), v2.end())){
        cout<<"Bob"<<endl;
        return;
    }
    else{
        cout<<"Alice"<<endl;
        return;
    }

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