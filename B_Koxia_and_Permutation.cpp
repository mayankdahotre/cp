// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=i+1;

//     reverse(v.begin(), v.begin()+n/2);
//     reverse(v.begin()+n/2,v.end());

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
//     cout<<endl;

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
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n,0);
    
//     if(k==1) for(int i=0; i<n; i++) v[i]=i+1;
//     else{
//         int d=1;
//         int e=n;
//         int li=0;

//         for(int i=k-1; i<n; i+=k){
//             v[i]=d;
//             d++;
//             li=i;
//         }

//         for(int i=0; i<li; i++){
//             if(v[i]==0){
//                 v[i]=e;
//                 e--;
//             }
//         }

//         for(int i=li+1; i<n; i++){
//             v[i]=e;
//             e--;
//         }
//     }

//     for(int i=0; i<n; i++) cout<<v[i]<<" ";
//     cout<<endl;

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
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    int e=n;
    int d=1;

    for(int i=0; i<n; i+=2) { v[i]=e; e--;}
    for(int i=1; i<n; i+=2) { v[i]=d; d++;}

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;

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