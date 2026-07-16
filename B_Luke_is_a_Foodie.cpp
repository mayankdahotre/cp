// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n,x;
//     cin>>n>>x;

//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     vector<pair<int,int>> vp;
//     for(int i=0; i<n; i++){
//         vp.push_back({v[i]-x,v[i]+x});
//     }

//     pair<int,int> p = vp[0];
//     int num=0;
//     for(auto &i: vp){
//         if(p->second >= i->first){
//             p->first=i->first;
//             p->second=min(i->second,p->second);
//         }
//         else{
//             num++;
//             p = i;
//         }
//     }

//     cout<<num<<endl;
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

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num_changes = 0;
    int l = a[0] - x, r = a[0] + x;  
    
    for (int i = 1; i < n; i++) {
        int new_l = a[i] - x, new_r = a[i] + x;

        if (new_l <= r) {  
            l = max(l, new_l);
            r = min(r, new_r);
        } 
        else {  
            num_changes++;
            l = new_l;
            r = new_r;
        }
        if(l>r){  
            num_changes++;
            l = new_l;
            r = new_r;
        }
    }

    cout << num_changes << endl;
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
