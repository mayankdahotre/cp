// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,h,k;
//     cin>>n>>h>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     int ans=(h/sum)*(n+k);
//     h%=sum;

//     // debug(h);
//     // debug(ans);

//     // debugv(v);

//     // reverse(v.begin(), v.end());

//     // debugv(v);

//     // int mx = max_element(v.begin(), v.end()) - v.begin();
//     // int mx2 = lower_bound(v.begin(), v.end(), v[mx]-1) - v.begin();

//     // // debug(mx);
//     // // debug(mx2);

//     // if(mx==0){
//     //     if(mx2!=1) swap(v[1], v[mx2]);
//     // }
//     // else if(mx==1){
//     //     if(mx2!=0) swap(v[0], v[mx2]);
//     // }
//     // else{
//     //     swap(v[0], v[mx]);
//     // }

    // for(int i=0; i<n; i++){
    //     int mxi = max_element(v.begin()+i, v.end()) - v.begin();
    //     if(mxi!=i){
    //         swap(v[mxi], v[i]);
    //         break;
    //     }
    // }

//     for(int i=0; i<n; i++){
//         h-=v[i];
//         ans++;
//         if(h<=0) break;
//     }

//     // debugv(v);

//     // debug(ans);

//     cout<<ans<<endl;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// void solve() {
//     int n,h,k;
//     cin>>n>>h>>k;

//     vector<int> v(n);

//     for(int i=0;i<n;i++) cin>>v[i];

//     int sum=0;

//     for(int x:v) sum+=x;

//     int ans=(h/sum)*(n+k);

//     if(h%sum==0) ans-=k;

//     // debug(ans);

//     h%=sum;

//     if(h==0){
//         cout<<ans<<endl;
//         return;
//     }

//     // debugv(v);
//     // // sort(v.rbegin(), v.rend());
//     // int m = INT_MAX;
//     // for(int i=0; i<n; i++){
//     //     int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
//     //     int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();
//     //     swap(v[mni], v[mxi]);

//     //     int sum2=0;
//     //     for(int j=0; j<=i; j++) sum2+=v[j];

//     //     swap(v[mni], v[mxi]);

//     //     if(h<=sum2) m=min(m, i);
//     // }

//     // int psum = 0;
//     // int m=n;
//     // for(int i=0; i<n; i++){
//     //     psum+=v[i];
//     //     int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
//     //     int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();

//     //     if(v[mxi]-v[mni]>0){
//     //         psum+=v[mxi]-v[mni];

//     //         if(h <= psum) m = min(m, i+1);

//     //         psum-=v[mxi]-v[mni];
//     //     }
//     // }


//     int psum = 0;
//     int m = n;

//     for(int i=0; i<n; i++){
//         psum += v[i];

//         int best = psum;
//         if(i != n-1){
//             int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
//             int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();

//             best += max(0LL, v[mxi] - v[mni]);
//         }

//         if(h <= best){
//             m = min(m, i+1);
//             break;
//         }
//     }

//     // debugv(v);

//     // for(int i=0;i<n;i++){
//     //     h-=v[i];
//     //     ans++;

//     //     if(h<=0) break;
//     // }

//     cout<<ans+m<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin>>T;

//     while(T--){
//         solve();
//     }
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,h,k;
    cin>>n>>h>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int sum=0;

    for(int x:v) sum+=x;

    int ans=(h/sum)*(n+k);

    if(h%sum==0) ans-=k;

    // debug(ans);

    h%=sum;

    if(h==0){
        cout<<ans<<endl;
        return;
    }

    // debugv(v);
    // // sort(v.rbegin(), v.rend());
    // int m = INT_MAX;
    // for(int i=0; i<n; i++){
    //     int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
    //     int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();
    //     swap(v[mni], v[mxi]);

    //     int sum2=0;
    //     for(int j=0; j<=i; j++) sum2+=v[j];

    //     swap(v[mni], v[mxi]);

    //     if(h<=sum2) m=min(m, i);
    // }

    // int psum = 0;
    // int m=n;
    // for(int i=0; i<n; i++){
    //     psum+=v[i];
    //     int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
    //     int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();

    //     if(v[mxi]-v[mni]>0){
    //         psum+=v[mxi]-v[mni];

    //         if(h <= psum) m = min(m, i+1);

    //         psum-=v[mxi]-v[mni];
    //     }
    // }


    // int psum = 0;
    // int m = n;

    // for(int i=0; i<n; i++){
    //     psum += v[i];

    //     int best = psum;
    //     if(i != n-1){
    //         int mxi = max_element(v.begin()+i+1, v.end()) - v.begin();
    //         int mni = min_element(v.begin(), v.begin()+i+1) - v.begin();

    //         best += max(0LL, v[mxi] - v[mni]);
    //     }

    //     if(h <= best){
    //         m = min(m, i+1);
    //         break;
    //     }
    // }



    vector<int> mn(n), mx(n);

    mn[0] = v[0];
    for(int i=1; i<n; i++) mn[i] = min(mn[i-1], v[i]);

    mx[n-1] = v[n-1];
    for(int i=n-2; i>=0; i--) mx[i] = max(mx[i+1], v[i]);

    int psum = 0;
    int m = n;

    for(int i=0; i<n; i++){
        psum += v[i];

        int best = psum;
        if(i != n-1){
            int gain = mx[i+1] - mn[i];
            if(gain > 0) best += gain;
        }

        if(best >= h){
            m = i+1;
            break;
        }
    }

    // debugv(v);

    // for(int i=0;i<n;i++){
    //     h-=v[i];
    //     ans++;

    //     if(h<=0) break;
    // }

    cout<<ans+m<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--){
        solve();
    }
}