// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n,0);
    
//     int d=0;
//     for(int i=0; i<31; i++){
//         if(d<n-1){
//             if((1<<i)&k){ v[d]=1<<i; k-=1<<i; d++; } // fixed i<<i -> 1<<i
//         }
//         else{ v[d]=k; break; }
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
    int n,k;
    cin>>n>>k;

    vector<int> v(n,0);

    if(n==1){
        v[0]=k;
    }
    else{
        int m=0;
        while((1<<(m+1))-1<=k) m++;
        v[0]=(1<<m)-1;
        v[1]=k-v[0];
    }

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