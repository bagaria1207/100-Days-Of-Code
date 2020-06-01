#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long power(long long a, long long b){
    long long res = 1;
    while(b){
        if(b%2){
            res = res * a % mod;
            b--;
        }
        else{
            a = a * a % mod;
            b/=2;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long fact[2000];
        fact[0] = 1;
        for(int i = 1;i < 2000;++i){
            fact[i] = fact[i - 1] * i % mod;
        }
        int n,m;
        cin>>n>>m;
        //a^m-1 = power(a, m-2)[Modular Inverse]
        long long ans = fact[n+m-1] *
        power(fact[m-1] * fact[n] % mod, mod-2) % mod;
        cout<<ans<<"\n";
    }
    return 0;
}
