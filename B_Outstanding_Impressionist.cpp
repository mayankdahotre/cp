// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> l(n), r(n);
//     for(int i=0; i<n; i++) cin>>l[i]>>r[i];

//     set<int> st;
//     for(int i=0; i<n; i++) if(l[i]==r[i]) st.insert(l[i]);

//     int lmx = *max_element(l.begin(), l.end());
//     int rmx = *max_element(r.begin(), r.end());

//     int lmn = *min_element(l.begin(), l.end());
//     int rmn = *min_element(r.begin(), r.end());

//     int mn = min(lmn,rmn);
//     int mx = max(lmx,rmx);

//     string s = string(n,'1');
//     for(int i=0; i<n; i++){
//         if(l[i]==r[i] && mn<=l[i] && l[i]<=mx){
//             s[i]='0';
//             continue;
//         }

//         int c=0;
//         for(int j=l[i]; j<=r[i]; j++){
//             if(st.find(j)!=st.end()) c++;
//         }

//         if(c==st.size() && st.size()!=0) s[i]='0';
//     }

//     cout<<s<<endl;
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
 
// void solve() {
//     int n;
//     cin>>n;
 
//     vector<int> l(n), r(n);
//     for(int i=0; i<n; i++) cin>>l[i]>>r[i];
 
//     string s = string(n, '1');
    
//     for(int i=0; i<n; i++){
//         int c=0;
//         for(int pos=l[i]; pos<=r[i]; pos++){
//             for(int k=0; k<n; k++){
//                 if(k==i) continue;
//                 if(l[k]==r[k] && l[k]==pos){
//                     c++;
//                     break;
//                 }
//             }
//         }
//         if(c==r[i]-l[i]+1) s[i]='0';
//     }
 
//     cout<<s<<endl;
// }
 
// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
//     int T;
//     cin>>T;
//     while(T--){
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool cmp(pair<pair<int,int>, int> a, pair<pair<int,int>, int> b){
//     if(a.first.first==b.first.first && a.first.second==b.first.second) return a.second<=b.second;
//     else if(a.first.first==b.first.first) return a.first.second<b.first.second;
//     return a.first.first<b.first.first;
// }

// int bs(vector<pair<pair<int,int>, int>> v, int a){
//     int n = v.size();
//     int l=0, r=n-1;
//     while(l<=r){
//         int m = (l+r)/2;
//         if(v[m].first.first<a) r=m-1;
//         else l=m+1;
//     }
    
//     if(l==-1 || l==n) return -1;
//     return l;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> l(n), r(n);
//     for(int i=0; i<n; i++) cin>>l[i]>>r[i];

//     string s = string(n, '1');

//     vector<pair<pair<int,int>, int>> v(n);

//     for(int i=0; i<n; i++) v[i] = {{l[i], r[i]}, i};

//     sort(v.begin(), v.end(), cmp);
    
//     for(int i=0; i<n; i++){
//         int a=v[i].first.first;
//         int b=v[i].first.second;
//         int idx=v[i].second;

//         int c=0;
//         for(int pos=a; pos<=b; pos++){
//             int j = bs(v, a);
//             if(j==-1) continue;
//             else if(v[j].first.second==a){
//                 c++;
//                 continue;
//             }
//         }
//         if(c==r[i]-l[i]+1) s[i]='0';
//     }

//     cout<<s<<endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin>>T;
//     while(T--){
//         solve();
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> l(n), r(n), p;

    for(int i=0;i<n;i++){
        cin >> l[i] >> r[i];
        if(l[i]==r[i]) p.push_back(l[i]);
    }

    string s(n,'1');

    for(int i=0;i<n;i++){

        int c=0;

        for(int pos=l[i]; pos<=r[i]; pos++)
            if(count(p.begin(),p.end(),pos)) c++;

        if(l[i]==r[i]){
            if(count(p.begin(),p.end(),l[i])>1) s[i]='0';
        }
        else if(c==r[i]-l[i]+1) s[i]='0';
    }

    cout<<s<<endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) solve();
}


