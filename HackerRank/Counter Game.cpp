#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll highestPower(ll n){
    ll res = 1;
    for(ll i =0;i<8*sizeof(unsigned long long); i++){
        ll curr = 1L<<i;
        if(curr > n){
            break;
        }
        res = curr;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool chanceL = true;
        if(n==1){
            cout<<"Louise"<<"\n";
        }
        else{
            while(n){
                ll aux = highestPower(n);
                if(n==aux){
                    n/=2;
                }
                else{
                    n=n-aux;
                }
                chanceL = !chanceL;
            }
            if(!chanceL){
                cout<<"Richard"<<"\n";
            }
            else{
                cout<<"Louise"<<"\n";
            }
        }
    }
    return 0;
}
