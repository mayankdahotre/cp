// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     if(n%2==0){
//         for(int i=1; i<=n/2; i++) cout<<i<<" "<<i<<" ";
//         cout<<endl;
//         return;
//     }
//     else if(n>=25){
//         int k=2, c=0;
//         for(int i=0; i<n; i++){
//             if(i==0 || i==9 || i==25) cout<<1<<" ";
//             else if(c==1){
//                 cout<<k<<" ";
//                 k++;
//                 c=0;
//             }
//             else{
//                 cout<<k<<" ";
//                 c++;
//             }
//         }
//     }
//     else{
//         cout<<-1<<endl;
//         return;
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
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define debugv(v) cout<<#v<<" = ";for(auto it:v)cout<<it<<" ";cout<<endl;
#define debugvv(v) {cout<<#v<<" = "<<endl;for(auto &r:v){for(auto &x:r)cout<<x<<" ";cout<<endl;}}

void solve(){
    int n;
    cin>>n;

    if(n%2==0){
        int k=1;
        for(int i=1;i<=n;i+=2){
            cout<<k<<" "<<k<<" ";
            k++;
        }
        cout<<endl;
        return;
    }

    if(n<27){
        cout<<-1<<endl;
        return;
    }

    vector<int>a(n+1);

    int k=1;
    int m=n-27;

    for(int i=1;i<=m;i+=2){
        a[i]=k;
        a[i+1]=k;
        k++;
    }

    int s=m+1;

    a[s]=k;
    a[s+9]=k;
    a[s+25]=k;
    k++;

    a[s+10]=k;
    a[s+26]=k;
    k++;

    vector<int>v;

    for(int i=s;i<=s+26;i++){
        if(a[i]==0)v.push_back(i);
    }

    for(int i=0;i<v.size();i+=2){
        a[v[i]]=k;
        a[v[i+1]]=k;
        k++;
    }

    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    cout<<endl;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}