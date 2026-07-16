// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // void solve() {
// //     int n;
// //     cin >> n;

// //     string s = to_string(n);
// //     int len = s.length();

// //     int sum = 0;
// //     for(char c : s) sum += (c - '0');

// //     if(sum <= 9){
// //         cout << 0 << "\n";
// //         return;
// //     }

// //     vector<int> reduce;

// //     for(int i = 0; i < len; i++){
// //         int d = s[i] - '0';
// //         if(i == 0){
// //             reduce.push_back(d - 1); // can't make leading zero
// //         } else {
// //             reduce.push_back(d);     // can make zero
// //         }
// //     }

// //     sort(reduce.rbegin(), reduce.rend());

// //     int need = sum - 9;
// //     int cnt = 0;

// //     for(int r : reduce){
// //         if(need <= 0) break;
// //         need -= r;
// //         cnt++;
// //     }

// //     cout << cnt << "\n";
// // }

// // int32_t main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int T;
// //     cin >> T;
// //     while(T--) solve();

// //     return 0;
// // }




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     string s = to_string(n);
//     int len = s.length();

//     int sum=0;
//     vector<int> reduce;
//     for(int i=0; i<len; i++){
//         if(i==0) reduce.push_back(s[i]-'0'-1);
//         else reduce.push_back(s[i]-'0');
//         sum+=s[i]-'0';
//     }

//     sort(reduce.rbegin(), reduce.rend());

//     int need = sum-9;
//     int cnt=0;

//     while(need>0){
//         need-=reduce[cnt];
//         cnt++;
//     }
    
//     cout<<cnt<<endl;
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
    string s;
    cin>>s;

    int n = s.length();
    int sum=0;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        int x = s[i]-'0';
        a.push_back(x-(i==0));
        sum+=x;
    }

    sort(a.begin(), a.end());
    int ans=0;
    while(sum>9){
        sum-=a.back();
        a.pop_back();
        ans++;
    }

    cout<<ans<<endl;
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