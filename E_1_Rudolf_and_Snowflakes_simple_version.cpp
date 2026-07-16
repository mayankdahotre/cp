#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int l=2, r=(-1+sqrt(4*n-3))/2;
    int t = 3;

    // auto v = (int k, int t) -> int{
    //     int sum = 0;
    //     int a = 1;
    //     for(int i=0; i<t; i++){
    //         sum+=a;
    //         a*=k;
    //     }
    //     return sum;
    // };

    for(int i=l; i<=r; i++){
        int sum=0;
        int v = 1;

        while(sum<=n){
            sum+=v;
            v*=i;

            if(sum==n){
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
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