// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// vector<int> p(1e9+2,1);
// void sieve(){
//     p[1]=0;
//     p[1]=0;

//     for(int i=2; i*i<1e9+2; i++){
//         if(p[i]){
//             for(int j=i*i; j<1e9+2; j+=i){
//                 p[j]=0;
//             }
//         }
//     }
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v;

    // while(n!=1){
    //     bool f = false;
    //     for(int i=2; i*i<=n; i++){
    //         if(n%i==0 && !p[n-i]){
    //             v.push_back(n-i);
    //             n-=i;
    //             f=true;
    //             break;
    //         }
    //     }

    //     if(!f){
    //         v.push_back(n-1);
    //         n--;
    //     }
    // }

    // for(int i=0; i<n; i++) cout<<v[i]<<" ";
    // cout<<endl;

    // return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     sieve();

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

// vector<int> p(1e6+1,1);

// void sieve(){
//     p[0]=p[1]=0;
//     for(int i=2; i*i<=1e6; i++){
//         if(p[i]){
//             for(int j=i*i; j<=1e6; j+=i){
//                 p[j]=0;
//             }
//         }
//     }
// }

// void solve() {

//     int n;
//     cin >> n;

//     vector<int> v;
//     v.push_back(n);

//     while(n!=1){
//         bool f = false;
//         for(int i=2; i*i<=n; i++){
//             if(n%i==0){
//                 if(!p[n-n/i]){    
//                     v.push_back(n-n/i);
//                     n-=n/i;
//                     f=true;
//                     break;
//                 }
//                 else if(p[n-i]){
//                     v.push_back(n-i);
//                     n-=i;
//                     f=true;
//                     break;
//                 }
//             }
//         }

//         if(!f){
//             v.push_back(n-1);
//             n--;
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

//     sieve();

//     int T;
//     cin >> T;

//     while(T--){

//         solve();
//     }

//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> p(1e6+1,1);

void sieve(){

    p[0]=p[1]=0;

    for(int i=2; i*i<=1e6; i++){

        if(p[i]){

            for(int j=i*i; j<=1e6; j+=i){

                p[j]=0;
            }
        }
    }
}

void solve() {

    int n;
    cin >> n;

    vector<int> v;

    v.push_back(n);

    while(n!=1){

        bool f=false;

        for(int i=2; i*i<=n; i++){

            if(n%i==0){

                if(n-n/i<=1e6 && (!p[n-n/i] || n-n/i==2)){

                    v.push_back(n-n/i);

                    n-=n/i;

                    f=true;

                    break;
                }

                else if(n-i<=1e6 && (!p[n-i] || n-i==2)){

                    v.push_back(n-i);

                    n-=i;

                    f=true;

                    break;
                }
            }
        }

        if(!f){

            v.push_back(n-1);

            n--;
        }
    }

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";

    cout<<endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    int T;
    cin >> T;

    while(T--){

        solve();
    }

    return 0;
}