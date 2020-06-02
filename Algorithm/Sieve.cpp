#include<bits/stdc++.h>
#define ll long long
#define mem 51
ll ar[mem];
using namespace std;
void sieve(){
    /*
        0 -> Composite Number
        1 -> Prime Number
    */
    for(ll i=1;i<mem;i++){
        ar[i]=1;
    }
    ar[0]=0;
    ar[1]=0;
    for(ll j=2;j*j<=mem;j++){
        if(ar[j]==1){
            for(ll i=j*j;i<=mem;i+=j){
                ar[i]=0;
            }
        }
    }
    for(ll i=0;i<mem;i++){
        cout<<i<<" "<<ar[i]<<"\n";
    }
}
int main(){
    sieve();
    return 0;
}
