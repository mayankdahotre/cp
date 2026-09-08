// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     int i=0, f=n-1;
//     int sum=0;
//     int ans=0;
//     while(i<=f){
//         if(i==f){
//             ans+=v[i]/2;
//             ans++;
//             ans+=v[i]%2;
//             break;
//         }

//         if(sum+v[i]<v[f]){
//             sum+=v[i];
//             ans+=v[i];
//             i++;
//         }
//         else if(sum+v[i]==v[f]){
//             ans++;
//             ans+=v[i];
//             sum=0;
//             i++;
//             f--;
//         }
//         else{
//             v[i]-=v[f]-sum;
//             ans+=v[f]-sum;
//             f--;
//             ans++;            
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int i = 0, f=n-1;
    int sum=0;
    int ans=0;
    while(i<=f){
        if(i==f){
            int rem = max(0LL, v[i] - sum);
            int nor = (rem + 1) / 2;
            ans += nor;
            if (v[i] - nor > 0) ans++; 
            break;
        }

        if(sum+v[i]<v[f]){
            sum+=v[i];
            ans+=v[i];
            i++;
        }
        else if(sum+v[i]==v[f]){
            ans++;
            ans+=v[i];
            sum=0;
            i++;
            f--;
        }
        else{
            v[i]-=v[f]-sum;
            ans+=v[f]-sum;
            f--;
            ans++;
            sum=0; 
            if(v[i] == 0) i++;
        }
    }

    cout<<ans<<endl;
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