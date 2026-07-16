// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool isp(int n){
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// vector<int> primes(int n){
//     vector<int> ispr(n+1,1);
//     ispr[0]=0;
//     ispr[1]=0;
//     for(int i=2; i<=n; i++){
//         if(ispr[i]){
//             for(int j=i*i; j<=n; j+=i){
//                 ispr[j]=0;
//             }
//         }
//     }

//     vector<int> res;
//     for(int i=0; i<=n; i++){
//         if(ispr[i]) res.push_back(i);
//     }

//     return res;
// }

// void solve() {
//     int n;
//     cin>>n;

//     char c;
//     cin>>c;

//     string s;
//     cin>>s;

//     bool ok = true;
//     for(int i=0; i<n; i++){
//         if(s[i]!=c){
//             ok=false;
//             break;
//         }
//     }

//     if(ok){
//         cout<<0<<endl; 
//         return;
//     }

//     vector<int> pr = primes(n);
//     int np = pr.size();

//     int lp = pr[np-1];

//     ok = false;
//     int puse = -1;
//     for(int i=0; i<np; i++){
//         if(s[pr[i]-1]==c){
//             ok = true;
//             puse = pr[i];
//             break;
//         }
//     }

//     if(ok){
//         cout<<1<<endl;
//         cout<<puse<<endl;
//         return;
//     }

//     cout<<2<<endl;
//     cout<<2<<" "<<lp<<endl;
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
    int n;
    cin>>n;

    char c;
    cin>>c;

    string s;
    cin>>s;

    bool same = true;
    for(int i=0; i<n; i++){
        if(s[i]!=c){
            same = false;
            break;
        }
    }

    if(same){
        cout<<0<<endl;
        return;
    }

    int p=0;
    for(int x=2; x<=n; x++){
        bool ok = true;
        for(int j=x; j<=n; j+=x){
            if(s[j-1]!=c){
                ok = false;
                break;
            }
        }
        
        if(ok){
            p = x;
            break;
        }
    }

    if(p!=0){
        cout<<1<<endl;
        cout<<p<<endl;
        return;
    }

    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
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