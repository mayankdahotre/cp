#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());
    int a=0, b=n-1, num1=0, num2=0;

    for(int i=0; i<n; i++){
        if(v[n-1]%2){
            if(v[i]%2){
                break; 
            }
            else{
                num1++;
            }
        }
        else{
            if(v[i]%2==0){
                num1=i;
                break;
            }
            else{
                num1++;
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[0]%2){
            if(v[i]%2){
                break; 
            }
            else{
                num2++;
            }
        }
        else{
            if(v[i]%2==0){
                break;
            }
            else{
                num2++;
            }
        }
    }

    cout<<min(num1,num2)<<endl;
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