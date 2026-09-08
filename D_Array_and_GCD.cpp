// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// vector<bool> sieve(int MAX_LIMIT){
//     vector<int> isp(MAX_LIMIT+1, true);

//     isp[0]=0, isp[1]=0;
//     for(int i=2; i*i<=MAX_LIMIT; i++){
//         for(int j=i*i; j<MAX_LIMIT; j+=i){
//             isp[j]=false;
//         }
//     }

//     return isp;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> suf(n+1,0);
//     suf[n]=v[n-1];
//     for(int i=n-1; i>=0; i--) suf[i]=suf[i+1]+v[i];

//     vector<int> prpr = sieve(MAX_LIMIT, MAXN);

//     int ans=0;
//     for(int i=0; i<n; i++){
//         if(prpr[i+1]<=suf[i]){
//             ans=i;
//         }
//     }

//     cout<<ans<<endl;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MAXN = 400005;
const int MAX_LIMIT = 6000000;

vector<int> prpr(MAXN + 1, 0);

void sieve(){
    vector<bool> isp(MAX_LIMIT, true);
    isp[0]=0, isp[1]=0;

    vector<int> primes;
    for(int i=2; i<MAX_LIMIT && primes.size()<MAXN; i++){
        if(isp[i]){
            primes.push_back(i);
            for(int j=i*i; j<MAX_LIMIT; j+=i){
                isp[j]=false;
            }
        }
    }

    for(int i=0; i<MAXN; i++){
        prpr[i+1] = prpr[i] + primes[i];
    }
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> suf(n+1,0);
    for(int i=n-1; i>=0; i--) suf[i]=suf[i+1]+v[i];

    int max_k = 0;
    for(int k=1; k<=n; k++){
        if(prpr[k] <= suf[n - k]){
            max_k = k;
        }
    }

    cout<<n - max_k<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}