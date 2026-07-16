// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, d;
//     cin >> n >> d;
//     deque<int> p;

//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         p.push_back(a);
//     }

//     sort(p.begin(), p.end());

//     int num = 0;
//     while (!p.empty()) {
//         int i = (d + p.back())/ p.back();
//         if (p.size() >= i) {
//             while (i-- && !p.empty()) p.pop_front(); 
//             p.pop_back();
//             num++;
//         } else {
//             break;
//         }
//     }
    
//     cout << num << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, d;
    cin >> n >> d;
    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    int num = 0;
    while (!pq.empty()) {
        int s = pq.top();
        pq.pop();
        int rp = (d + s) / s; 
        
        if ((int)pq.size() >= rp - 1) {
            for (int i = 0; i < rp - 1; i++) {
                pq.pop();
            }
            num++;
        } else {
            break;
        }
    }
    
    cout << num << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}