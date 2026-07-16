// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     int sum = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]=='L') ans+=i-1;
//         else ans+= n-1-i;
//     }

//     int i=0, j=n-1;
//     vector<int> v;
//     while(i<=n/2 && j>=n/2){
//         while(s[i]=='R'){
//             i++;
//             v.push_back(ans);
//         }
//         while(s[j]=='L'){
//             j++;
//             v.push_back(ans);
//         }

//         int temp = 0;
//         if(s[i]=='L' && s[j]=='R'){
//             int a = n-1-i;
//             int b = i-1;
//             if(a>b){
//                 s[i]='R';
//                 ans-=i-1;
//                 ans+=n-1-i;
//             }
//             else{
//                 s[j]='L';
//                 ans-=n-1-i;
//                 ans+=i-1;
//             }
//             v.push_back(ans);
//         }
//     }

//     for(auto i: v){
//         cout<<i<<" ";
//     }
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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long sum = 0;
    vector<long long> gains;

    // Initial sum calculation
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L')
            sum += i;  // Contribution of 'L'
        else
            sum += (n - 1 - i);  // Contribution of 'R'
    }

    vector<long long> changes;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == 'L') {
            int gain = (n - 1 - i) - i;
            changes.push_back(gain);
        }
    }
    for (int i = n / 2; i < n; i++) {
        if (s[i] == 'R') {
            int gain = i - (n - 1 - i);
            changes.push_back(gain);
        }
    }

    // Sort gains in decreasing order
    sort(changes.rbegin(), changes.rend());

    for (int i = 0; i < n; i++) {
        if (i < changes.size() && changes[i] > 0)
            sum += changes[i];
        cout << sum << " ";
    }
    cout << endl;
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
