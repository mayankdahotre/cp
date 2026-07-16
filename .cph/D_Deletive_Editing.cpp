// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     string s1,s2;
//     cin>>s1>>s2;

//     int n1=s1.length();
//     int n2=s2.length();

//     reverse(s2.begin(),s2.end());
//     reverse(s1.begin(),s1.end());

//     vector<int> freq(26,0);
//     for(auto c: s2){
//         freq[c-'a']++;
//     }

//     string s3="";
//     for(int i=0; i<n1; i++){
//         if(freq[s1[i]]-'a') 
//         {
//             s3+=s1[i];
//             freq[s1[i]-'a']--;
//         }
//     }

//     if(s3==s2){
//         cout<<"YES"<<endl;
//         return;
//     }
//     else{
//         cout<<"NO"<<endl;
//         return;
//     }
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
    string s1, s2;
    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    vector<int> freq(26, 0);
    for (char c : s2) {
        freq[c - 'a']++;
    }

    string s3 = "";
    for (char c : s1) {
        if (freq[c - 'a']) {
            s3 += c;
            freq[c - 'a']--;
        }
    }

    if (s3 == s2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
