#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    // for(int i=0; i<n-1; i++){
    //     if(v[i]%2==0){
    //         cout<<v[i]<<" "<<v[i+1]<<endl;
    //         return;
    //     }
    // }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((v[j]%v[i])%2==0){
                cout<<v[i]<<" "<<v[j]<<endl;
                return;
            }
        }
    }

    cout<<-1<<endl;
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int e1=-1,e2=-1;
//     int o1=-1, o2=-1;

//     for(int i=0; i<n; i++){
//         if(v[i]%2){
//             if(o1==-1) { o1=v[i]; continue; }
//             if(o2==-1) { o2=v[i]; continue; }
//         }
//         else{
//             if(e1==-1){ e1=v[i]; continue; }
//             if(e2==-1){ e2=v[i]; continue; }
//         }
//     }

//     if(o1!=-1 && o2!=-1) cout<<o1<<" "<<o2<<endl;
//     else if(e1!=-1 && e2!=-1) cout<<e1<<" "<<e2<<endl;
//     else cout<<-1<<endl;

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