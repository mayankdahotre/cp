#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    vector<int> v(6);
    for(int i=0;i<6;i++)cin>>v[i];

    int maxn=max(a,max(b,max(c,max(d,max(e,f)))));

    int x=maxn, y=maxn;

    if(maxn==a){
        y-=b;
        int maxn2=max(c,max(d,max(e,f)));
        if(maxn2==c){
            x-=d;
            if(x==min(e,f) && y=max(e,f)){

            }
            else return -1;
        }
        else if(maxn2==d){
            x-=c;
            if(x==min(e,f) && y=max(e,f)){

            }
            else return -1;
        }
    }
    else if(maxn==b){
        y-=a;
        int maxn2=max(c,max(d,max(e,f)));
        if(maxn2==c){
            x-=d;
            if(x==min(e,f) && y=max(e,f)){

            }
            else return -1;
        }
        else if(maxn2==d){
            x-=c;
            if(x==min(e,f) && y=max(e,f)){

            }
            else return -1;
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