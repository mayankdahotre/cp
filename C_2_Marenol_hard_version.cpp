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

//     string a,b;
//     cin>>a>>b;

//     if(n<3){
//         if(a==b) yes;
//         else no;
//         return;
//     }

//     int ans=0;

//     vector<int> ao, bo;
//     int net1o=0;
//     int j=1;
//     for(int i=0; i<n; i+=2){
//         if(a[i]=='1') net1o++;
//         if(b[i]=='1') net1o--;

//         if(a[i]=='1') ao.push_back(j);
//         if(b[i]=='1') bo.push_back(j);
//         j++;
//     }

//     int net1e=0;
//     vector<int> ae, be;
//     j=1;
//     for(int i=1; i<n; i+=2){
//         if(a[i]=='1') net1e++;
//         if(b[i]=='1') net1e--;

//         if(a[i]=='1') ae.push_back(j);
//         if(b[i]=='1') be.push_back(j);
//         j++;
//     }

//     if(net1o || net1e){
//         cout<<-1<<endl;
//         return;
//     }

//     for(int i=0; i<ao.size(); i++) ans+=abs(ao[i]-bo[i]);
//     for(int i=0; i<ae.size(); i++) ans+=abs(be[i]-ae[i]);

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

    string a,b;
    cin>>a>>b;

    if(n<3){
        if(a==b) cout << 0 << endl;   // <-- changed
        else cout << -1 << endl;      // <-- changed
        return;
    }

    int ans=0;

    vector<int> ao, bo;
    int net1o=0;
    int j=1;
    for(int i=0; i<n; i+=2){
        if(a[i]=='1') net1o++;
        if(b[i]=='1') net1o--;

        if(a[i]=='1') ao.push_back(j);
        if(b[i]=='1') bo.push_back(j);
        j++;
    }

    int net1e=0;
    vector<int> ae, be;
    j=1;
    for(int i=1; i<n; i+=2){
        if(a[i]=='1') net1e++;
        if(b[i]=='1') net1e--;

        if(a[i]=='1') ae.push_back(j);
        if(b[i]=='1') be.push_back(j);
        j++;
    }

    if(net1o || net1e){
        cout<<-1<<endl;
        return;
    }

    for(int i=0; i<ao.size(); i++) ans+=abs(ao[i]-bo[i]);
    for(int i=0; i<ae.size(); i++) ans+=abs(be[i]-ae[i]);

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