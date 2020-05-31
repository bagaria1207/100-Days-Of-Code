#include<bits/stdc++.h>
using namespace std;

long long euclidean_gcd(long long a, long long b){
    if(a==0){
        return b;
    }
    return euclidean_gcd(b%a, a);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        long long ans1 = 0;
        cin>>a>>b;
        if(euclidean_gcd(a,b)>1){
            ans1 = -1;
            cout<<ans1<<"\n";
        }
        else{
            ans1 = a*b - a - b + 1;
            cout<<ans1<<"\n";
        }
    }
    return 0;
}
