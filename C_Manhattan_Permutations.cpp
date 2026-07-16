// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=i+1;

//     if(k%2){
//         cout<<"No"<<endl;
//         return;
//     }
//     else if(k>=0 && k<=2*(n-1)){
//         cout<<"Yes"<<endl;
//         k/=2;
//         rotate(v.begin(), v.begin()+k, 1);

//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;

//         return;
//     }
//     else{
//         bool ok = false;
//         int m = -1;
//         for(int i=1; i<=(n/2); i++){
//             if(k%(2*i)==0){
//                 k/=(2*i);
//                 if(k<=n-i){
//                     j=i;
//                     bool ok = true;
//                     break;
//                 }
//             }
//         }

//         if(ok){
//             cout<<"Yes"<<endl;
//             rotate(v.begin(), v.begin()+k, m);
            
//             for(int i=0; i<n; i++) cout<<v[i]<<" ";
//             cout<<endl;

//             return;
//         }
//     }

//     cout<<"No"<<endl;
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
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=i+1;

//     if(k%2) {
//         cout<<"No"<<endl;
//         return;
//     }
//     else if(k>=0 && k<=2*(n-1)) {
//         cout<<"Yes"<<endl;

//         int len=k/2;

//         if(len>0) {
//             int m=1;
//             m %= len;
//             rotate(v.begin(), v.begin()+m, v.begin()+len);
//         }

//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;

//         return;
//     }
//     else{
//         bool ok=false;
//         int m=-1;

//         for(int i=1; i<=(n/2); i++) {
//             int t=k;

//             if(t%(2*i)==0) {
//                 t/=(2*i);

//                 if(t<=n-i) {
//                     k = t;
//                     m = i;
//                     ok = true;
//                     break;
//                 }
//             }
//         }

//         if(ok){
//             cout<<"Yes"<<endl;

//             if(k>0){
//                 m %= k;
//                 rotate(v.begin(), v.begin()+m, v.begin()+k);
//             }

//             for(int i=0; i<n; i++) cout<<v[i]<<" ";
//             cout<<endl;

//             return;
//         }
//     }

//     cout<<"No"<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--) {
//         solve();
//     }

//     return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=i+1;

//     if(k%2) {
//         cout<<"No"<<endl;
//         return;
//     }
//     else if(k>=0 && k<=2*(n-1)) {
//         cout<<"Yes"<<endl;

//         int len=k/2;

//         if(len>0) {
//             int m=1;
//             m %= len;
//             rotate(v.begin(), v.begin()+m, v.begin()+len);
//         }

//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;

//         return;
//     }
//     else{
//         int l=0, r=n-1;
//         while(k>2*(n-1)){
//             swap(v[l], v[r]);
//             l++;
//             r--;
//             k-=2*(n-1);
//         }

//         int m=k/(r-l+1);
//         int len = r-l+1;
//         rotate(v.begin(), v.begin()+m, v.begin()+len);

//         for(int i=0; i<n; i++) cout<<v[i]<<" ";
//         cout<<endl;

//         return;
//     }

//     cout<<"No"<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while(T--) {
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

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++) v[i]=i;

    int mx=0;
    for(int i=1; i<=n/2; i++)
        mx += 2*(n - 2*i + 1);

    if(k%2 || k>mx){
        cout<<"No"<<endl;
        return;
    }

    cout<<"Yes"<<endl;

    int l=1, r=n;

    while(l<r){
        int g = 2*(r-l);

        if(k>=g){
            swap(v[l], v[r]);
            k-=g;
            l++;
            r--;
        }
        else{
            k/=2;

            if(k>0)
                swap(v[l], v[l+k]);

            break;
        }
    }

    for(int i=1; i<=n; i++) cout<<v[i]<<" ";
    cout<<endl;
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