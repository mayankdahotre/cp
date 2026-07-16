// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     map<int,int> mp;

//     for(int i=0; i<n; i++){
//         for(int j=2; j*j<=v[i]; j++){
//             if(v[i]%j==0){
//                 // v[i]=j;
                
//                 if(mp.count(j)){
//                     cout<<"YES"<<endl;
//                     return;
//                 }

//                 if(mp.count(v[i]/j)){
//                     cout<<"YES"<<endl;
//                     return;
//                 }

//                 mp[j]++;
//                 if(v[i]/j!=j) mp[v[i]/j]++;
//             }
//         }
//     }

//     cout<<"NO"<<endl;
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

//     map<int,int> mp;

//     for(int i = 0; i < n; i++){
//         int x = v[i];

//         for(int j = 2; j * j <= x; j++){
//             if(x % j == 0){

//                 if(mp.count(j)){
//                     cout << "YES" << endl;
//                     return;
//                 }
//                 mp[j]++;

//                 while(x % j == 0) x /= j;
//             }
//         }

//         if(x > 1){
//             if(mp.count(x)){
//                 cout << "YES" << endl;
//                 return;
//             }
//             mp[x]++;
//         }
//     }

//     cout << "NO" << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }






#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXA = 1000000 + 5;
int spf[MAXA];

void build_spf() {
    for(int i = 1; i < MAXA; i++) spf[i] = i;

    for(int i = 2; i * i < MAXA; i++) {
        if(spf[i] == i) {
            for(int j = i * i; j < MAXA; j += i) {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    unordered_set<int> used;

    for(int i = 0; i < n; i++){
        int x = v[i];

        while(x > 1){
            int p = spf[x];

            if(used.count(p)){
                cout << "YES\n";
                return;
            }
            used.insert(p);

            while(x % p == 0) x /= p;
        }
    }

    cout << "NO\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    build_spf();

    int T;
    cin >> T;
    while(T--) solve();
}

