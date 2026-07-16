// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     if((n*n-k)%2){
//         cout<<"NO"<<endl;
//         return;
//     }

//     vector<vector<char>> v(n, vector<char>(n,'D'));

//     if(n%2==0){
//         int x=0;
//         while(k--){
//             v[x/n][x%n]='L';
//             v[x/n][x%n +1]='R';
//             x+=2;
//         }
//     }
//     else{        
//         int x=0;
//         int k1 = min(k, n*(n-1));
//         while(k1--){
//             v[x/n][x%n]='L';
//             v[x/n][x%n +1]='R';
//             x+=2;
//         }

//         k=max(0LL, k-k1);

//         x=0;
//         while(k--){
//             v[x][n-1]='D';
//             v[x+1][n-1]='L';
//             x+=2;
//         }
//     }

//     cout<<"YES"<<endl;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<v[i][j];
//         }
//         cout<<endl;
//     }

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

    if((n*n)-1==k){
        cout<<"NO"<<endl;
        return;
    }

    vector<vector<char>> v(n, vector<char>(n,'D'));

    k=(n*n)-k;

    if(n%2==0){
        int x=0;
        while(k){
            if(x%n == n-1) x++; 

            v[x/n][x%n]='L';
            v[x/n][x%n +1]='R';
            x+=2;
            k-=2;
        }
    }
    else{
        int x=0;
        int k1 = min(k, (n*(n-1)));

        while(k1){
            if(x%n == n-1) x++; 

            v[x/n][x%n]='R';
            v[x/n][x%n +1]='L';
            x+=2;
            k1-=2;
        }

        k = max(0LL, k - (min(k, n*(n-1))));

        x=0;
        while(k){
            v[x][n-1]='D';      
            v[x+1][n-1]='U';   
            x+=2;
            k-=2;
        }
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}