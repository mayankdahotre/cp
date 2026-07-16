#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    deque<int> a(n),b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int i=0,j=0,val=a[0],maxn=1,l=1;
    while(i<n || j<n){
        if(a[i]==val){
            i++;
            l++;
        }
        if(b[j]==val){
            j++;
            l++;
        }
        if(a[i]!=val){
            val=a[i];
            maxn=max(maxn,l);
            l=1;
        }
        if(b[j]!=val){
            val=b[j];
            maxn=max(maxn,l);
            l=1;
        }
    }
    maxn=max(maxn,l);

    cout<<maxn<<endl;
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