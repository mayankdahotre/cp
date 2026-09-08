#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, t;
    cin>>n>>t;

    vector<vector<int>> v(n);
    for(int i=0; i<n-1; i++){
        int n1,n2;
        cin>>n1>>n2;

        n1--;
        n2--;

        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }

    int x;
    cin>>x;
    x--;

    vector<int> vis(n,0);
    vis[x]=1;

    if(v[x].size()==1){
        if((n-1)%2) cout<<"Ron"<<endl;
        else cout<<"Hermione"<<endl;

        return;
    }
    else{
        int a=0, b=0;
        int st = v[x][0];
        a++;
        vis[st]=1;
        while(v[st].size()>1){
            if(vis[v[st][0]]) st=v[st][1];
            else st=v[st][0];

            vis[st]=1;
            a++;
        }

        b=n-a-1;

        if(a%2 || b%2) cout<<"Ron"<<endl;
        else cout<<"Hermione"<<endl;

        return;
    }

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}