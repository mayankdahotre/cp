// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int x;
//     cin>>x;

//     for(int y=1; y<x; y++){
//         int a = x^y;
//         if(a+x>y && a+y>x && x+y>a){
//             cout<<a<<endl;
//             return;
//         }
//     }

//     cout<<-1<<endl;
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


#include <iostream>
using namespace std;

bool isValid(int x, int y) {
    int a = x ^ y;
    return (a < x + y) && (a + x > y) && (a + y > x);
}

void solve() {
    int x;
    cin >> x;
    
    int low = 1, high = x - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(x, mid)) {
            ans = mid;
            high = mid - 1;  // Try to find a smaller valid `y`
        } else {
            low = mid + 1;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}