#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k,b,s;
    cin>>n>>k>>b>>s;

    if(k*b>s || s-b*k>(k-1)*(n)){
        cout<<-1<<endl;
        return;
    }

    vector<int> v;
    v.push_back(min(b*k,s));
    s-=min(b*k,s);
    int i=1;
    while(s>=k){
        s-=k-1;
        v.push_back(k-1);
        i++;
    }
    v.push_back(s);
    i++;
    while(i<n){
        v.push_back(0);
        i++;
    }

    reverse(v.begin(), v.end());

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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k,b,s;
//     cin>>n>>k>>b>>s;

//     if(k*b > s || s - k*b > (k-1)*n){
//         cout<<-1<<endl;
//         return;
//     }

//     vector<int> v(n,0);

//     v[0] = k*b;
//     s -= k*b;

//     for(int i=0;i<n;i++){
//         int add = min(s, k-1);
//         v[i] += add;
//         s -= add;
//     }

//     for(int i=0;i<n;i++) cout<<v[i]<<" ";
//     cout<<endl;
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