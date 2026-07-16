// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     string s;
//     cin>>s;

//     vector<vector<int>> v(n, vector<int>(m));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[i][j];

//     vector<int> sc(m,0), sr(n,0);

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             sr[i]+=v[i][j];
//         }
//     }

//     for(int j=0; j<m; j++){
//         for(int i=0; i<n; i++){
//             sc[j]+=v[i][j];
//         }
//     }

//     int x=0, y=0;
//     vector<pair<int,int>> vp;
//     vp.push_back({x,y});
//     for(auto c: s){
//         if(c=='D') x++;
//         if(c=='R') y++;

//         vp.push_back({x,y});
//     }

//     reverse(vp.begin(), vp.end());

//     for(int i=0; i<n+m-1; i++){
//         int curx = vp[i].first;
//         int cury = vp[i].second;

//         int prevx = vp[i+1].first;
//         int prevy = vp[i+1].second;

//         if(curx == prevx) v[curx][cury] = -sc[cury];
//         if(cury == prevy) v[curx][cury] = -sr[curx];
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             sr[i]+=v[i][j];
//         }
//     }

//     sc.clear();
//     sr.clear();
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             sr[i]+=v[i][j];
//         }
//     }

//     for(int j=0; j<m; j++){
//         for(int i=0; i<n; i++){
//             sc[j]+=v[i][j];
//         }
//     }

//     // reverse(vp.begin(), vp.end());

//     for(int i=1; i<n+m-3; i++){
//         if(s[i]!=s[i-1] || s[i]!=s[i+1]){
//             int curx = vp[i].first;
//             int cury = vp[i].second;
//             v[curx][cury] = -sc[cury];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }

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

void solve() {
    int n,m;
    cin>>n>>m;

    string s;
    cin>>s;

    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[i][j];

    vector<int> sc(m,0), sr(n,0);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sr[i]+=v[i][j];
        }
    }

    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            sc[j]+=v[i][j];
        }
    }

    int x=0, y=0;
    vector<pair<int,int>> vp;
    vp.push_back({x,y});
    for(auto c: s){
        if(c=='D') x++;
        if(c=='R') y++;

        vp.push_back({x,y});
    }

    reverse(vp.begin(), vp.end());

    for(int i=0; i<vp.size(); i++){
        int curx = vp[i].first;
        int cury = vp[i].second;

        if(!curx && !cury){
            v[curx][cury]=-sc[cury];
        }

        int prevx = vp[i+1].first;
        int prevy = vp[i+1].second;

        if(curx == prevx) v[curx][cury] = -sc[cury];
        if(cury == prevy) v[curx][cury] = -sr[curx];

        sc[cury]+=v[curx][cury];
        sr[curx]+=v[curx][cury];

        // cout<<curx<<" "<<cury<<" "<<v[curx][cury]<<endl;
    
        // for(int l=0; l<n; l++){
        //     for(int j=0; j<m; j++){
        //         cout<<v[l][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    }

    

    // sc.clear();
    // sr.clear();
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         sr[i]+=v[i][j];
    //     }
    // }

    // for(int j=0; j<m; j++){
    //     for(int i=0; i<n; i++){
    //         sc[j]+=v[i][j];
    //     }
    // }

    // // reverse(vp.begin(), vp.end());

    // for(int i=1; i<n+m-3; i++){
    //     if(s[i]!=s[i-1] || s[i]!=s[i+1]){
    //         int curx = vp[i].first;
    //         int cury = vp[i].second;
    //         v[curx][cury] = -sc[cury];
    //     }
    // }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

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