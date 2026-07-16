#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b;
    cin>>a>>b;

    int xors=0, len=a;
    for(int i=0; i<a; i++) xors^=i;
    if(a==b){
        if(xors==a) len+=a+2;
        else len++;
    }
    else{
        if(xors==a)  len+=a+2;
        else len++;
    }

    cout<<len<<endl;
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