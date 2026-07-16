// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(30,0);
//     vector<int> q;

//     for(int i=0; i<n; i++){
//         int a,x;
//         cin>>a>>x;

//         if(a==1) v[x]++;
//         else q.push_back(x);
//     }

    // for(int i=0; i<q.size(); i++){
    //     int x=q[i];
    //     int mxi=0;
    //     while((1<<mxi) < x) mxi++;

    //     for(int j=min(29LL,mxi); j>=0; j--){
    //         int l=0, r=v[j];
    //         while(l<r){
    //             int m = (l+r)/2;
    //             if(m*(1<<j) < x) l=m;
    //             else r=m;
    //         }
    //         x-=l*(1<<j);

    //     }

//         if(x==0) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }

//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(30, 0);

    for(int i = 0; i < n; i++) {
        int a, x;
        cin>>a>>x;

        if(a == 1) v[x]++;
        else{
            for(int j=29; j>=0; j--) {
                int t = min(v[j], x/(1LL << j));
                x-=t*(1LL<<j);
            }

            if(x==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}