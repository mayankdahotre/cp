// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> k(n);
//     for(int i=0; i<n; i++) cin>>k[i];

//     vector<double> x(n);
//     double den=0;
//     for(int i=0; i<n; i++) den+=1/k[i];

//     for(int i=0; i<n; i++) x[i]=ceil(100*(1/k[i])/den);

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=x[i];

//     bool ok=true;
//     for(int i=0; i<n; i++){
//         if(k[i]*x[i]<=sum){
//             cout<<-1<<endl;
//             return;
//         }
//     }

//     for(int i=0; i<n; i++) cout<<x[i]<<" ";
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
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> k(n);
//     for(int i=0; i<n; i++) cin>>k[i];

//     vector<double> x(n);
//     double den=0;
//     for(int i=0; i<n; i++) den+=1.0/k[i]; // Changed 1 to 1.0 to prevent integer truncation

//     int p=1;
//     for(int i=0; i<n; i++) p*=k[i];

//     // int s=1;
//     // for(int i=0; i<p-1; i++) s*=p;

//     for(int i=0; i<n; i++) x[i]=ceil(p*(1.0/k[i])/den); // Changed 1 to 1.0 here as well

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=x[i];

//     bool ok=true;
//     for(int i=0; i<n; i++){
//         if(k[i]*x[i]<=sum){
//             cout<<-1<<endl;
//             return;
//         }
//     }

//     for(int i=0; i<n; i++) cout<<x[i]<<" ";
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int lcm(int a, int b) { 
    return (a / __gcd(a, b)) * b; 
} 

void solve() {
    int n;
    cin>>n;

    vector<int> k(n);
    for(int i=0; i<n; i++) cin>>k[i];

    int p = 1; 
    for(int i=0; i<n; i++) { 
        p = lcm(p, k[i]); 
        if (p > 1e14) { 
            cout << -1 << endl; 
            return;
        }
    }

    vector<int> x(n); 
    for(int i=0; i<n; i++) x[i] = p / k[i];

    int sum=0;
    for(int i=0; i<n; i++) sum+=x[i];

    bool ok=true;
    for(int i=0; i<n; i++){
        if(k[i]*x[i]<=sum){
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0; i<n; i++) cout<<x[i]<<" ";
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