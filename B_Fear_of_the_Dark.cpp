// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int px,py;
//     cin>>px>>py;
//     int ax,ay;
//     cin>>ax>>ay;
//     int bx,by;
//     cin>>bx>>by;

//     double do = min(sqrt((ax**2)+(ay**2)), sqrt((bx**2)+(by**2)));
//     double dp = min(sqrt((ax-px)**2+(ay-py)**2), sqrt((bx-px)**2+(by-py)**2));
//     double ab = sqrt((ax-bx)**2+(ay-by)**2);
//     double r = ab/2;

//     if(do>r || dp>r) cout<<max(do,dp)<<endl;
//     else cout<<r<<endl;

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
//     double px,py;
//     cin>>px>>py;
//     double ax,ay;
//     cin>>ax>>ay;
//     double bx,by;
//     cin>>bx>>by;

//     double doa = sqrt((ax*ax)+(ay*ay));
//     double dob = sqrt((bx*bx)+(by*by));
//     double dpa = sqrt((ax-px)*(ax-px)+(ay-py)*(ay-py));
//     double dpb = sqrt((bx-px)*(bx-px)+(by-py)*(by-py));
//     double ab = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
//     double r = ab/2;

//     double do_ = min(doa, dob);
//     double dp = min(dpa, dpb);

//     if(do_>r || dp>r) cout<<max(do_,dp)<<endl;
//     else cout<<r<<endl;

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
    double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;

    auto dist = [](double x1,double y1,double x2,double y2){
        return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    };

    double doa=dist(0,0,ax,ay), dob=dist(0,0,bx,by);
    double dpa=dist(px,py,ax,ay), dpb=dist(px,py,bx,by);
    double dab=dist(ax,ay,bx,by);

    auto check = [&](double w) -> bool {
        // O in circle A or B
        bool oa=(doa<=w), ob=(dob<=w);
        // P in circle A or B
        bool pa=(dpa<=w), pb=(dpb<=w);
        // circles overlap
        bool overlap=(dab<=2*w);

        if(!oa && !ob) return false;
        if(!pa && !pb) return false;

        // same circle covers both
        if((oa&&pa)||(ob&&pb)) return true;

        // different circles, need overlap
        return overlap;
    };

    double lo=0, hi=1e9;
    for(int i=0; i<100; i++){
        double mid=(lo+hi)/2;
        if(check(mid)) hi=mid;
        else lo=mid;
    }

    cout<<fixed<<setprecision(10)<<hi<<endl;
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