#include <bits/stdc++.h>

using namespace std;

bool isp(int n){
    for(int i=2; i*i<=n; i++) if(n%i==0) return false;
    return true;
}

vector<int> sieve(int n){
    vector<int> isp(n+1,1);
    isp[0]=0;
    isp[1]=0;

    for(int i=2; i*i<=n; i++){
        if(isp(i)){
            for(int j=i*i; j<=n; j+=i){
                isp[j]=0;
            }
        }
    }

    return isp;
}

void primefact(int n){
    map<int,int> m;

    for(int i=2; i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                m[i]++;
                n/=i;
            }
        }
    }
    
    for(auto [i,j]: m){
        cout<<i<<" "<<j<<endl;
    }
}

void primefact_opt(int n){
    map<int,int> m;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                m[i]++;
                n/=i;
            }
        }
    }

    for(auto [i,j]: m){
        cout<<i<<" "<<j<<endl;
    }
}

map<int,int> primefact_sieve(int n){
    vector<int> p(n+1,-1);
    p[0]=0;
    p[1]=0;

    for(int i=2; i<=n; i++){
        if(p[i]==-1){
            for(int j=i; j<=n; j+=i){
                if(p[i]!=-1){
                    p[j]=i;
                }
            }
        }
    }

    map<int,int> m;
    while(n!=1){
        m[p[n]]++;
        n/=p[n];
    }

    return m;
}

int binexp(int a, int n){
    int res=1;

    while(n){
        if(n%2){
            res*=a;
            n--;
        }
        else{
            a=a*a;
            n/=2;
        }
    }

    return res;
}

int modexp(int a, int n, int p){
    int res=1;

    while(n){
        if(n%2){
            res = (res*a)%p;
            n--;
        }
        else{
            a (a*a)%p;
            n/=2;
        }
    }
    return res;
}

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}




vector<int> p(1000000,1);
vector<int> pp(1000000,0);

void sieve(){
    p[0]=0;
    p[1]=1;

    for(int i=2; i*i<=1000000; i++){
        if(p[i]){
            for(int j=i*i; j<=1000000; j+=i){
                p[j]=0;
            }
        }
    }

    int cnt=0;

    for(int i=1; i<=1000000; i++){
        if(p[i]) cnt++;

        if(p[cnt]) pp[i]=1;
        else pp[i]=0;
    }

    for(int i=1; i<=n; i++){
        pp[i]+=pp[i-1]
    }
}

int modinv(int n, int p){
    return power(n, p-2)%p;
}

int C(int n, int k, int p){
    if(k<n) return -1;

    int res = F[n];
    res /= power(F[k], p-2)%p;
    res /= power(F[n-k], p-2)%p;

    return res;
}

// euler's totient function
int phi(int n){
    int cnt = 0;
    for (int i=1; i<=n; i++) if(gcd(i,n)==1) cnt++;
    return cnt;
}

// phi(prime p) = p-1;

// phi(prime p^x) = p^(x-1)*(p-1)

int phi(int n){
    int res = 1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            res*=i-1;
            res/=i;

            while(n%i==0) res/=i;
        }

        if(n>1){
            res*=n-1;
            res/=n;
        }
    }
    return res;
}

void phi_sieve(){
    vector<int> phi(1000001);

    for(int i=0; i<=1000000; i++) phi[i]=i;

    for(int i=2; i*i<=1000000; i++){
        if(phi==i){
            for(int j=i; j<=1000000; j+=i){
                phi[j]*=i-1;
                phi[j]/=i;
            }
        }
    }

    return;
}

// gcd sum
int gcdsum(int n){
    int res = 0;
    for(int i=1; i<=n; i++) res+=gcd(n,i);
    return res;
}
// nlogn

int gcdsumetf(int n){
    int res = 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int d1 = i;
            int d2 = n/i;

            res += d1 * phi[n/i];

            if(d1!=d2){
                res += d2 * phi[i];
            }
        }
    }
    
    return res;
}

int main(){
    vector<int> F(1000000000);
    F[0]=1;
    F[1]=1;

    for(int i=1; i<=1000000000; i++){
        F[i] = (F[i-1] * i)%p;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;

        cout<<pp[r]-pp[l-1]<<endl;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, l, r;
        cin>>n>>l>>r;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        int g1 = v[0];
        for(int i=0; i<l; i++) g1 = gcd(g1, v[i]);
        int g2 = v[r+1];
        for(int i=r+1; i<n; i++) g2 = gcd(g2, v[i]);

        return gcd(g1,g2);
    }
}

// fermat's little theorem