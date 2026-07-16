#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i]; 
        b[i]=pow(2,a[i]);
    }

    for(int i=1; i<n; i++){
        int sum1=0;
        for(int j=i; j<n; j++){
            sum1+=b[j];
            for(int k=0; k<i; k++){
                int sum2=0;
                for(int l=k; l<i; l++){
                    sum2+=b[k];
                    if(sum1==sum2){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
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