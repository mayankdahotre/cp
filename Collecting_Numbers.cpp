// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int32_t main() { 
//     int n;
//     cin >> n; 

//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     int a = 1;
//     int num = 0;

//     for(int i=0; i<n; i++){
//         if(v[i+1]<v[i]) num++;
//     }

//     cout << num << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;
    
    vector<int> pos(n + 1); // Position array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = i; // Store index of each number
    }

    int rounds = 1; // At least one round is needed
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) { // If out of order, new round needed
            rounds++;
        }
    }

    cout << rounds << endl;
    return 0;
}
