// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int lcm(int a, int b) {
//     return (a / __gcd(a, b)) * b;
// }

// void solve() {
//     int a, b, c, m;
//     cin >> a >> b >> c >> m;

//     int ab = lcm(a, b);
//     int bc = lcm(b, c);
//     int ac = lcm(a, c);
//     int abc = lcm(ab, c);

//     int A = m / a;
//     int B = m / b;
//     int C = m / c;

//     int AB = m / ab;
//     int BC = m / bc;
//     int AC = m / ac;

//     int ABC = m / abc;

//     int x = 0, y = 0, z = 0;

//     // only A
//     x += (A - AB - AC + ABC) * 6;

//     // only B
//     y += (B - AB - BC + ABC) * 6;

//     // only C
//     z += (C - AC - BC + ABC) * 6;

//     // A & B only
//     x += (AB - ABC) * 3;
//     y += (AB - ABC) * 3;

//     // B & C only
//     y += (BC - ABC) * 3;
//     z += (BC - ABC) * 3;

//     // A & C only
//     x += (AC - ABC) * 3;
//     z += (AC - ABC) * 3;

//     // A & B & C
//     x += ABC * 2;
//     y += ABC * 2;
//     z += ABC * 2;

//     cout << x << " " << y << " " << z << '\n';
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

int lcm(int a, int b){
    return a*b/__gcd(a,b);
}

void solve() {
    int a,b,c,m;
    cin>>a>>b>>c>>m;

    int x=0, y=0, z=0;

    int ab=lcm(a,b), bc=lcm(b,c), ac=lcm(a,c);
    int abc=lcm(ab,c);

    int A=m/a, B=m/b, C=m/c;
    int AB=m/ab, AC=m/ac, BC=m/bc;
    int ABC=m/abc;

    x+=(A-AB-AC+ABC)*6;
    y+=(B-BC-AB+ABC)*6;
    z+=(C-AC-BC+ABC)*6;

    x+=(AB-ABC+AC-ABC)*3;
    y+=(BC-ABC+AB-ABC)*3;
    z+=(AC-ABC+BC-ABC)*3;

    x+=ABC*2;
    y+=ABC*2;
    z+=ABC*2;

    cout<<x<<" "<<y<<" "<<z<<endl;
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