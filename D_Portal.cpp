// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     // v.insert(v.begin()+y, -1);
//     // v.insert(v.begin()+x, -1);

//     vector<int> a, b;
//     for(int i=x; i<=y; i++) a.push_back(v[i]);
//     for(int i=0; i<x; i++) b.push_back(v[i]);
//     for(int i=y+1; i<n; i++) b.push_back(v[i]);

//     vector<int> a2(a.size()-1);
//     int mna = min_element(a.begin(), a.end()) - a.begin();

//     debugv(a);
//     debug(mna);

//     debugv(a2);

//     int na = a.size();
//     for(int i=0; i<na; i++) a2[i]=a[(i+mna)%na];

//     debugv(a2);

//     int mnav = a2[0];
    
//     int nb = b.size();
//     int lbb = lower_bound(b.begin(), b.end(), mnav) - b.begin();

//     for(int i=0; i<=lbb; i++) cout<<b[i]<<" ";
//     for(int i=0; i<na; i++) cout<<a2[i]<<" ";
//     for(int i=lbb+1; i<nb; i++) cout<<b[i]<<" ";
//     cout<<endl;

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

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];


    vector<int> a, b;
    for(int i=x; i<y; i++) a.push_back(v[i]);  
    // if(y!=n) a.push_back(v[y]);     
    if(x!=0) for(int i=0; i<x; i++) b.push_back(v[i]);
    if(y!=n) for(int i=y; i<n; i++) b.push_back(v[i]);     
    
    // debugv(a);
    // debugv(b);

    if(a.empty()) {                                 
        for(int i=0; i<n; i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }

    int na = a.size();
    vector<int> a2(na);                               
    int mna = min_element(a.begin(), a.end()) - a.begin();

    // debugv(a);
    // debug(mna);
    // debugv(a2);

    for(int i=0; i<na; i++) a2[i]=a[(i+mna)%na];

    // debugv(a2);

    int mnav = a2[0];

    int nb = b.size();

    int lbb = 0;
    for(int i=0; i<nb; i++) {
        if(b[i] < mnav) lbb++;                      
        else break;                                   
    }

    for(int i=0; i<lbb; i++) cout<<b[i]<<" ";        
    for(int i=0; i<na; i++) cout<<a2[i]<<" ";
    for(int i=lbb; i<nb; i++) cout<<b[i]<<" ";       
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